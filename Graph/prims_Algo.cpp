#include <bits/stdc++.h>
using namespace std;
// 1 based indexing  (graph nodes are considered from 1 to n)

#define pp pair<int, int> 
#define ll long long  
vector<list<pp>> graph; // {neighbor, weight}

void add_edge(int src, int dest, int wt, int bidir = true){
    graph[src].push_back({dest, wt});
    if(bidir) graph[dest].push_back({src, wt});
}


ll prims(int src, int n){
    // min-heap priority queue to pick edge with minimum weight
    priority_queue<pp, vector<pp>, greater<pp>> pq;  //{weight, node}
    
    vector<int> parent(n+1); 
    unordered_map<int, int> mp; // mp[node] = minimum weight required to connect this node
    unordered_set<int> vis; // to mark visited nodes

    // Initialisation
    for(int i = 1; i <= n; i++){
        mp[i] = INT_MAX; // initially all distances = infinity
    }
    pq.push({0, src});      // src node with weight 0
    mp[src] = 0;            // distance of src → src is 0
    parent[src] = -1;       // src has no parent in MST

    int total_edge = 0;     // count of edges included in MST (should be n-1 finally)
    ll result = 0;          // sum of MST edge weights

    // Main loop of Prim’s
    while(total_edge <= n-1 && !pq.empty()){
        auto [wt, node] = pq.top(); // pick edge with min weight
        if(vis.count(node)) {       // if already visited, skip
            pq.pop();
            continue;
        }

        result += wt;        // add this edge weight to MST result
        total_edge++;        // one more edge added
        vis.insert(node);    // mark this node visited
        pq.pop(); 

        // Explore neighbors of current node
        for(auto [neibh_node, neibh_wt] : graph[node]){
            // if neighbor not visited and we found a smaller weight edge to connect it
            if(!vis.count(neibh_node) && neibh_wt < mp[neibh_node]){
                mp[neibh_node] = neibh_wt;         // update min edge weight for this node
                pq.push({neibh_wt, neibh_node});   // push new better edge in pq
                parent[neibh_node] = node;         // update parent of this neighbor
            }
        }
    }

    // If you want to print the MST edges, uncomment below loop
    /*
    for(int i = 1; i <= n; i++){
        cout << i << " <- " << parent[i] << " (wt: " << mp[i] << ")\n";
    }
    */

    return result; // total weight of MST
}


int main() {
    int n, m;
    cin >> n >> m;
    graph.resize(n+1, list<pp>());

    while(m--){
        int u, v, wt;
        cin >> u >> v >> wt;
        add_edge(u, v, wt);
    }

    int src;
    cin >> src;
    cout << prims(src, n) << "\n";
    return 0;
}

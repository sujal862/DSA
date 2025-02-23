#include <bits/stdc++.h>
using namespace std;

vector< list<int> > graph;
unordered_set<int> visited;
int v; //no. of vertices
void add_edge(int src, int dest, bool bi_dir = true) { //default bi_dir = true
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

//DFS - Depth First Search
bool dfs(int curr, int end){
    if(curr == end) return true;
    visited.insert(curr); //mark the curr node as visited
    for(auto neighbour : graph[curr]){  //Explore all the neighbours of curr node
        if(!visited.count(neighbour)){
            bool result  = dfs(neighbour, end);
            if(result) return true;
        }
    }
    return false;
}

bool anyPath(int src, int dest){
    return dfs(src, dest);
}



int main() {

    cin>>v; 
    graph.resize(v, list<int> ());
    visited.clear();
    int e;  //no. of edges
    cin>>e;
    while(e--) {
        int s, d;
        cin>>s>>d;
        add_edge(s, d, false); //directed graph
    }
    int x, y;
    cin>>x>>y;
    cout << (anyPath(x, y) ? "Path exists" : "No path") << "\n";
    return 0;
}
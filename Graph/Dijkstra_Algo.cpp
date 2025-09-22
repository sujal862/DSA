#include<bits/stdc++.h>
using namespace std;

vector<list<pair<int, int>>> graph;
void add_edge(int src, int dest, int wt, bool bi_dir = true){
    graph[src].push_back({dest, wt});
    if(bi_dir) graph[dest].push_back({src, wt});
}

// Dijkstra Algo - T.C = 
int dijkstra(int src, int end, int n){
    if(src == end) return 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; //{wt, node}
    vector<int> via(n, -1);
    unordered_map<int, int> mp; //{dest, wt}
    unordered_set<int> vis; // once a node is poped from qu then that will be the shortest possible path to reach that node from src(bec we are always picking a minimum path from edge -> and if a vertex is picked then it is sure that there was no other path minimum then picked one i.e all other paths were larger in qu)

    for(int i = 0; i<n; i++) mp[i] = INT_MAX;
    mp[src] = 0;
    pq.push({0, src});

    while(!pq.empty()){ //O((V+E) log V)
        auto [wt, node] = pq.top();
        pq.pop();
        if(vis.count(node)) continue; // this insures then a picked path for same node was smaller then curr path so skip

        vis.insert(node); //mark visited

        for(auto [neibh, neibh_wt] : graph[node]){
            int new_path =  mp[node] + neibh_wt;
            if( !vis.count(neibh) && new_path < mp[neibh]){  // Relaxation algo
                mp[neibh] = new_path;
                pq.push({new_path, neibh});
                via[neibh] = node;
            }
        }
    }

    // If you want to print the path 
    // int i = end;
    // cout<<i<<"<--";
    // while(i != -1){
    //     if(via[i]!=-1) cout<<via[i]<<"<--";
    //     i = via[i];
    // }
    // cout<<"\n";

    return (mp[end] != INT_MAX) ? mp[end] : -1; // if end is unrechable return -1
}

int main(){
    int n,m;
    cin>>n>>m;
    graph.resize(n, list<pair<int, int>>());

    while(m--){
        int u, v, wt;
        cin>>u>>v>>wt;
        add_edge(u, v, wt);
    }
    int src, end;
    cin>>src>>end;
    cout<<dijkstra(src, end, n)<<"\n";
}
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

//BFS
void bfs(int src, vector<int> &dist){
    queue<int> qu;
    visited.clear();
    dist.resize(v, INT_MAX);
    dist[src] = 0;
    visited.insert(src);
    qu.push(src);
    while(!qu.empty()){
        int curr = qu.front();
        qu.pop();
        for(auto neibhour : graph[curr]){
            if(not visited.count(neibhour)){
            visited.insert(neibhour);
            qu.push(neibhour);
            dist[neibhour] = dist[curr] + 1;
            }   
        }
    }
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
    int x;
    cin>>x;
    vector<int> dist;
    bfs(x, dist);
    for(int i = 0; i < dist.size(); i++){
        cout<<dist[i]<<" ";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;


int v;
vector< list<int> > graph;
unordered_set<int> visited;
vector<vector<int>>result;
void add_edge(int src, int dest, bool bi_dir){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}

void dfs(int curr, int end, vector<int>& path){
    if(curr == end) {
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }

    visited.insert(curr);
    path.push_back(curr);
    for(auto neibh : graph[curr]){
        if(not visited.count(neibh)){
            dfs(neibh, end, path);
        }
    }
    path.pop_back();
    visited.erase(curr);
    return;
}

void all_paths(int src, int dest) {
    vector<int> path;
    dfs(src, dest, path);
}


int main() {
    cin>>v;
    graph.resize(v, list <int> ());
    int e;
    cin>>e;
    while(e--){
        int s, d;
        cin>>s>>d;
        add_edge(s, d, true);
    }
    int x, y;
    cin>>x>>y;
    all_paths(x,y);
    for(auto each : result){
        for(auto el : each){
            cout<<el<<"->";
        }
        cout<<"\n";
    }
    return 0;
}


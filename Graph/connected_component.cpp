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
void dfs(int node, unordered_set<int> &visited){
    visited.insert(node);
    for(auto neibh : graph[node]){
        if(!visited.count(neibh)){
            dfs(neibh, visited);
        }
    }
}

int connected_Component(){
    int res = 0;
    unordered_set<int> visited;
    for(int i = 0; i < v; i++){
        //go on every node
        //if from a vertex we can initialize a dfs, we got one more cc
        if(visited.count(i) == 0){
            res++;
            dfs(i, visited);
        }
    }
    return res;
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
        add_edge(s, d, true); //directed graph
    }
    cout <<connected_Component()<< "\n";
    return 0;
}
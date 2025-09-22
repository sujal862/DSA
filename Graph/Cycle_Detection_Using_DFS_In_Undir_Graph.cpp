#include <bits/stdc++.h>
using namespace std;

vector< list<int> > graph;
int v; //no. of vertices
void add_edge(int src, int dest, bool bi_dir = true) { //default bi_dir = true
    graph[src].push_back(dest);     
    if(bi_dir){
        graph[dest].push_back(src);
    }  
}

bool dfs(int src, int parent, unordered_set<int>& vis){
    vis.insert(src);
    for(auto neibh : graph[src]){
        if(not vis.count(neibh)){
            bool res = dfs(neibh, src, vis);
            if(res) return true;
        } else {
            if(parent != neibh){
                return true;
            }
        }
    }
    return false;
}

bool has_Cycle(){
    unordered_set<int> vis;
    for(int i = 0; i< v; i++){ // running dfs for every vertex because we may have disconnected components
        if(!vis.count(i)){
            bool res = dfs(i, -1, vis);
            if(res) return true;
        }
    }
    return false;
}

void display() {
    for(int i = 0; i < graph.size(); i++){ 
        cout<<i<<" -> ";
        for(auto el : graph[i]) {
            cout<<el<<" , ";
        }
        cout<<"\n";
    }
}

int main() {

    cin>>v; 
    graph.resize(v, list<int> ());
    int e;  //no. of edges
    cin>>e;
    while(e--) {
        int s, d;
        cin>>s>>d;
        add_edge(s, d, true);
    }
    display();
    bool res = has_Cycle();
    if(res) cout<<"Cycle Detected\n";
    else cout<<"Cycle Not Detected\n";
}
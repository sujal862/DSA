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

bool bfs(int src,  unordered_set<int>& vis){
    queue<int> qu;
    vector<int> parent(v, -1);

    qu.push(src);
    vis.insert(src);
    
    while(!qu.empty()){
        int x = qu.front();
        qu.pop();

        for(auto neibh : graph[x]){
            if(!vis.count(neibh)){
                qu.push(neibh);
                vis.insert(neibh);
                parent[neibh] = x;
            } else {
                if(parent[x] != neibh){
                    return true;
                }
            }
        }
    }
    return false;
}

bool has_Cycle(){
    unordered_set<int> vis;
    for(int i = 0; i< v; i++){ // running dfs for every vertex because we may have disconnected components
        if(!vis.count(i)){
            bool res = bfs(i, vis);
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
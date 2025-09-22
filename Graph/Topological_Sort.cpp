#include <bits/stdc++.h>
using namespace std;

int v;
vector<list<int>> graph;

void add_edge(int a, int b, int bidir){
    graph[a].push_back(b);
    if(bidir) graph[b].push_back(a);
}


void topoBFS(){
    //kahn's Algo -> detects cycle 
    queue<int> qu;
    set<int> vis;
    vector<int> indegree(v, 0);

    for(int i = 0; i<v; i++){
        // v ----> neibhour
        for(auto neibhour : graph[i]){
            indegree[neibhour] ++;
        }
    }

    for(int i = 0; i< v; i++){
        if(indegree[i] == 0){
            qu.push(i);
            vis.insert(i);
        }
    }

    while(!qu.empty()){
        int x = qu.front();
        cout<<x<<" "; // topological order for depedency resolution
        qu.pop();

        for(auto neibh : graph[x]){
            if(not vis.count(neibh)){
                indegree[neibh]--;
                if(indegree[neibh] == 0){
                    qu.push(neibh);
                    vis.insert(neibh);
                }
            }
        }
    }

}

int main(){
    cin>>v;
    graph.resize(v, list<int>());

    int e;
    cin>>e;
    while(e--){
        int a, b;
        cin>>a>>b;
        add_edge(a, b, false);
    }
    topoBFS();
}
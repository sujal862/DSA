#include <bits/stdc++.h>
using namespace std;

int find(vector<int> &parent, int x) {
    //T.c = O(log*n) ~> const
    //this method returns which group/cluster x belongs to
    if (parent[x] == x) return x;
    return parent[x] = find(parent, parent[x]);
}

bool Union(vector<int> &parent, vector<int> &rank, int a, int b) {
    //T.c = O(log*n)
    a = find(parent, a);
    b = find(parent, b);

    if(a==b) return true; // both vertices belongs to same cluster

    if (rank[a] <= rank[b]) {
        parent[a] = b;
        rank[b]++; // one more link (branch) added 
    } else {
        parent[b] = a;
        rank[a]++;
    }

    return false;
}   

int main() {
    int n, m; 
    cin >> n >> m;
    // n -> elements & m -> no. of queries
    vector<int> parent(n + 1);
    vector<int> rank(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        parent[i] = i;
    }

    while (m--) {
        int x, y;
        cin >> x >> y;
        bool res = Union(parent, rank, x, y);
        if(res) cout<<"Cycle Detected\n";
    }
    return 0;
}


// total TC = O(e*(log*n)) ~> O(e);  e = number edges = no. of union oper
#include <bits/stdc++.h>
using namespace std;

// 🔹 DSU -> Find function (Path Compression)
int find(vector<int> &parent, int x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent, parent[x]); // compress path
}

// 🔹 DSU -> Union function (Union by Rank)
// Returns true if cycle (same parent), false otherwise
bool Union(vector<int> &parent, vector<int> &rank, int a, int b) {
    a = find(parent, a);
    b = find(parent, b);

    if (a == b) return true; // already connected → cycle

    // attach smaller rank tree under bigger rank tree
    if (rank[a] <= rank[b]) {
        parent[a] = b;
        rank[b]++; 
    } else {
        parent[b] = a;
        rank[a]++;
    }
    return false;
}

// 🔹 Kruskal’s Algorithm
int kruskals(int n, vector<int> from, vector<int> to, vector<int> wt) {
    int m = from.size();

    // Step 1: make edge list
    vector<vector<int>> graph(m, vector<int>(3));
    for (int i = 0; i < m; i++) {
        graph[i][0] = from[i];
        graph[i][1] = to[i];
        graph[i][2] = wt[i];
    }

    // Step 2: sort edges by weight
    sort(graph.begin(), graph.end(), [](vector<int> &a, vector<int> &b) {
        if (a[2] != b[2]) return a[2] < b[2];
        else return a[0] + a[1] + a[2] < b[0] + b[1] + b[2]; // A/Q if wt is same then minimize u+v+wt (in Hacker rank Q only)
    });

    // Step 3: initialize DSU
    vector<int> parent(n + 1), rank(n + 1, 0);
    for (int i = 0; i <= n; i++) parent[i] = i;

    int mst = 0, totalEdges = 0, i = 0;
    
    // Step 4: Pick edges until MST has (n-1) edges
    while (totalEdges < n - 1 && i < m) {
        if (!Union(parent, rank, graph[i][0], graph[i][1])) {
            mst += graph[i][2];   // add edge weight
            totalEdges++;         // count this edge
        }
        i++;
    }
    return mst; // return total cost of MST
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> from(m), to(m), wt(m);
    for (int i = 0; i < m; i++) {
        cin >> from[i] >> to[i] >> wt[i]; // input edges
    }

    int res = kruskals(n, from, to, wt);
    cout << res << "\n"; // print MST cost

    return 0;
}

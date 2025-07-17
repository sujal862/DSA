#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<vector<int>> children(n + 1);
    
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        children[u].push_back(v);
    }
    
    vector<int> childCount(n + 1, 0);
    
    function<int(int)> dfs = [&](int node) -> int {
        int count = 0;
        for (int child : children[node]) {
            count += 1 + dfs(child);
        }
        return childCount[node] = count;
    };
    
    for (int i = 1; i <= n; i++) {
        if (childCount[i] == 0) {
            dfs(i);
        }
    }
    
    for (int i = 1; i <= n; i++) {
        cout << childCount[i];
        if (i < n) cout << " ";
    }
    cout << "\n";
    
    int result = 0;
    
    for (int i = 1; i <= n; i++) {
        int xorSum = 0;
        for (int j = i; j <= n; j++) {
            xorSum ^= childCount[j];
            if (xorSum == 0) {
                result++;
            }
        }
    }
    
    cout << result << "\n";
    
    return 0;
}
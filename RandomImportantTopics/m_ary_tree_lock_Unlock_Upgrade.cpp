#include <bits/stdc++.h>
using namespace std;

// Class to implement Locking Tree functionalities
class LockingTree {
    vector<vector<int>> tree;          // Tree in adjacency list form
    unordered_map<int, int> parent;    // Stores parent of each node
    vector<int> locked_by;             // Stores user ID who locked node (-1 means unlocked)

public:
    // Constructor to build tree from parent list
    LockingTree(int n, vector<int>& parent_list) {
        tree.resize(n);
        locked_by.assign(n, -1); // Initially all nodes are unlocked

        for (int i = 0; i < n; ++i) {
            parent[i] = parent_list[i];
            if (parent_list[i] != -1) {
                tree[parent_list[i]].push_back(i); // Build children list
            }
        }
    }

    // Function to check if any ancestor of node is locked
    bool has_locked_ancestor(int node) {
        int par = parent[node];
        while (par != -1) {
            if (locked_by[par] != -1)
                return true;
            par = parent[par];
        }
        return false;
    }

    // Function to check if any descendant of node is locked
    bool has_locked_descendant(int node) {
        queue<int> q;
        q.push(node);

        while (!q.empty()) {
            int cur = q.front(); q.pop();
            for (int child : tree[cur]) {
                if (locked_by[child] != -1)
                    return true; // found locked child
                q.push(child);
            }
        }
        return false;
    }

    // Function to unlock all descendants of a node
    void unlock_all_descendants(int node) {
        queue<int> q;
        q.push(node);

        while (!q.empty()) {
            int cur = q.front(); q.pop();
            for (int child : tree[cur]) {
                locked_by[child] = -1; // unlock
                q.push(child);
            }
        }
    }

    // LOCK: Try to lock a node for a user
    bool lock(int node, int user) {
        if (locked_by[node] == -1 && !has_locked_ancestor(node) && !has_locked_descendant(node)) {
            locked_by[node] = user; // lock the node
            return true;
        }
        return false; // can't lock
    }

    // UNLOCK: Try to unlock a node for a user
    bool unlock(int node, int user) {
        if (locked_by[node] == user) {
            locked_by[node] = -1; // unlock
            return true;
        }
        return false; // someone else locked it
    }

    // UPGRADE: Unlock all descendants and lock current node
    bool upgrade(int node, int user) {
        // Can't upgrade if already locked or has locked ancestor
        if (locked_by[node] != -1 || has_locked_ancestor(node))
            return false;

        // Check for at least one locked descendant
        bool found = false;
        queue<int> q;
        q.push(node);
        while (!q.empty()) {
            int cur = q.front(); q.pop();
            for (int child : tree[cur]) {
                if (locked_by[child] != -1)
                    found = true; // found locked descendant
                q.push(child);
            }
        }

        if (!found) return false; // No locked child

        // Unlock all descendants
        unlock_all_descendants(node);

        // Lock current node
        locked_by[node] = user;
        return true;
    }

    // For debug: print all currently locked nodes
    void print_locked() {
        cout << "Current Locked Nodes:\n";
        for (int i = 0; i < locked_by.size(); ++i) {
            if (locked_by[i] != -1)
                cout << "Node " << i << " is locked by User " << locked_by[i] << "\n";
        }
        cout << "-------------------------\n";
    }
};

int main() {
    // Tree:         0
    //             / | \
    //            1  2  3
    //           / \
    //          4   5
    //               \
    //                6
    vector<int> parent_list = {-1, 0, 0, 0, 1, 1, 5};
    LockingTree tree(7, parent_list);

    cout << "Tree with 7 nodes created.\n";
    cout << "Operations:\n1. Lock\n2. Unlock\n3. Upgrade\n4. Print Locked Nodes\n5. Exit\n";

    int choice;
    while (true) {
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 5) break; // Exit program

        int node, user;
        switch (choice) {
            case 1:
                cout << "Enter node and user to lock: ";
                cin >> node >> user;
                cout << (tree.lock(node, user) ? "Lock Successful" : "Lock Failed") << endl;
                break;

            case 2:
                cout << "Enter node and user to unlock: ";
                cin >> node >> user;
                cout << (tree.unlock(node, user) ? "Unlock Successful" : "Unlock Failed") << endl;
                break;

            case 3:
                cout << "Enter node and user to upgrade: ";
                cin >> node >> user;
                cout << (tree.upgrade(node, user) ? "Upgrade Successful" : "Upgrade Failed") << endl;
                break;

            case 4:
                tree.print_locked();
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}

class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
       if (n == 1) return {0}; 
    
    vector<int> degree(n, 0); 
    vector<vector<int>> adj(n); 
     queue<int> leaves; 
    for (auto& edge : edges) {
        int u = edge[0], v = edge[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
        degree[u]++;
        degree[v]++;
    }
    for (int i = 0; i < n; ++i) {
        if (degree[i] == 1) 
            leaves.push(i);
    }

    int remNodes = n;
    while (remNodes > 2) {
        int numOfLeaves = leaves.size();
        remNodes -= numOfLeaves;

        for (int i = 0; i < numOfLeaves; ++i) {
            int leaf = leaves.front();
            leaves.pop();

            for (int neigh : adj[leaf]) {
                if (--degree[neigh] == 1)
                    leaves.push(neigh);
            }
        }
    }

    vector<int> result;
    while (!leaves.empty()) {
        result.push_back(leaves.front());
        leaves.pop();
    }

    return result; 
    }
};

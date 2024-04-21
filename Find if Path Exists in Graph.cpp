class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);
    for (auto edge : edges) {
        graph[edge[0]].push_back(edge[1]);
        graph[edge[1]].push_back(edge[0]);
    }

    queue<int> q;
    q.push(source);

    unordered_set<int> visited;
    visited.insert(source);

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        if (curr == destination) {
            return true;
        }

        for (int neighbor : graph[curr]) {
            if (visited.find(neighbor) == visited.end()) {
                q.push(neighbor);
                visited.insert(neighbor);
            }
        }
    }

    return false; 
    }
};

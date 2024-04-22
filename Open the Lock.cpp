class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
          string start = "0000";
    if (start == target) return 0;
    
    unordered_set<string> dead(deadends.begin(), deadends.end());
    if (dead.count(start) || dead.count(target)) return -1;
    
    queue<string> q;
    q.push(start);
    unordered_set<string> visited;
    visited.insert(start);
    
    int level = 0;
    
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; ++i) {
            string current = q.front();
            q.pop();
            
            if (current == target) return level;
            
            for (int j = 0; j < 4; ++j) {
                for (int k = -1; k <= 1; k += 2) {
                    string next = current;
                    next[j] = (next[j] - '0' + k + 10) % 10 + '0';
                    
                    if (!visited.count(next) && !dead.count(next)) {
                        q.push(next);
                        visited.insert(next);
                    }
                }
            }
        }
        ++level;
    }
    
    return -1;
    }
};

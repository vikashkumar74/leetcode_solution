class Solution {
public:
    int maxDepth(string s) {
        int depth=0,open=0;
        for(auto c:s){
            if(c=='(')
            open++;
            if(c==')')
            open--;
            depth=max(depth,open);
    
        }
        return depth;
    }
};

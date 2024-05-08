class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
       vector<int>rank(score.begin(),score.end());
        sort(rank.rbegin(),rank.rend());
        unordered_map<int,string>mapp;
        for(int i=0;i<rank.size();i++){
            if(i==0)
                mapp[rank[i]]="Gold Medal";
          else if(i==1)
                mapp[rank[i]]="Silver Medal";
            else if(i==2)
                mapp[rank[i]]="Bronze Medal";
              else
                  mapp[rank[i]]=to_string(i + 1);
        }
        vector<string> result(score.size());
        for(int i=0;i<score.size();i++){
            result[i]=mapp[score[i]];
        }
        return result;
    }
};

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i=0,j=people.size()-1;
        sort(people.begin(),people.end());
        int boats=0;
        while(i<=j){
        if(people[i]+people[j]<=limit){
            i++;
        }
       j--;
        boats++;
        }
        return boats;
    }
};

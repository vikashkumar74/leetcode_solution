class Solution {
public:
    string removeKdigits(string num, int k) {
    string st="";
    for(auto numb:num){
        while(!st.empty()&&k>0&&st.back()>numb){
            st.pop_back();
            k--;
        }
     if(!st.empty()||numb!='0'){
            st.push_back(numb);
     }
        
    }
    while(!st.empty()&&k>0){
        st.pop_back();
        k--;
    }
    if(st.empty()){
        return "0";
    }
return st;
    }
};

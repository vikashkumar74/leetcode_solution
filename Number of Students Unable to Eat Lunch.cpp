class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& sand) {
      stack<int> s;
      queue<int> q;
      bool finish=false;
      int index=0;
      for(int i=sand.size()-1;i>=0;i--){
        s.push(sand[i]);
      } 
      for(int i=0;i<st.size();i++){
        q.push(st[i]);
      }
      while(!finish){

    if(q.empty()){
        return 0;
    }
    else if(index==q.size()){
        finish=true;
    }
    else if( s.top()==q.front()){
        s.pop();
        q.pop();
        index=0;
    }
    else{
    q.push(q.front());
    q.pop();
    index++;
    }
      }
      return q.size();
    }
};

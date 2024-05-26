class Solution {
public:
    string compressedString(string word) {
        string camp="";
      
        for(int i=0;i<word.size();){
              int count=0;
              char ch=word[i];
                      while(i<word.size()&&ch==word[i])  {
                
                    count++;
                    i++;
                
            }
            if(count>9){
                while(count>9){
                camp+='9';
                camp+=ch;
                count-=9;
                }
            }
            
                 camp+=to_string(count);
                camp+=ch;  
            
        
        }
        return camp;
    }
};

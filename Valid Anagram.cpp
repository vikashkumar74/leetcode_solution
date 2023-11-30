//////////////////////////////////question//////////////////////////////
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

// Example 1:

// Input: s = "anagram", t = "nagaram"
// Output: true
// Example 2:

// Input: s = "rat", t = "car"
// Output: false
 

// Constraints:

// 1 <= s.length, t.length <= 5 * 104
// s and t consist of lowercase English letters.
 

// Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?
///////////////////////////////solution//////////////////////////////////////////////////////
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        int hash[256]={0};
        for(int i=0;i<s.size();i++){
            hash[s[i]]++;
        }
         for(int i=0;i<t.size();i++){
           int x= --hash[t[i]];
             if(x<0)
                 return false;
             
        }
        return true;
        
    }
};

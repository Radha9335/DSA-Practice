#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];
        string ans="";

        for(int i=0;i<s.length();i++){

        
          for(int j=0;j<strs.size();j++){

            if(strs[j].length()==i || strs[j][i]!=s[i]){
                return ans;
            }
            
          }
          ans+=s[i];

        }
        return ans;
    }
};
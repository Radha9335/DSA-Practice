#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minChar(string &s) {
        // code here
        int m=s.size();
        string st=s;
        reverse(st.begin(),st.end());
        s+='&';
        s+=st;
        int n=s.size();
        vector<int>lps(s.size(),0);
        
       int pre=0;
        int suf=1;
        
        while(suf<s.size()){
            if(s[pre]==s[suf]){
                lps[suf]=pre+1;
                suf++;
                pre++;
            }
            else{
                if(pre==0){
                    suf++;
                }
                else{
                    pre=lps[pre-1];
                }
            }
        }
            
        return m-lps[n-1];
    }
};

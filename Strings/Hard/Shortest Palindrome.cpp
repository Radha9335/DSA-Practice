#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string shortestPalindrome(string s) {
        string ans=s;
         int m=s.size();
        string rev=s;
        reverse(rev.begin(),rev.end());
        s+='&';
        s+=rev;
        
        vector<int>lps(s.size(),0);
        int pre=0;
        int suf=1;
        
        while(suf<s.size()){
            if(s[pre]==s[suf]){
                lps[suf]=pre+1;
                pre++;
                suf++;
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
        int l=m-lps[s.size()-1];

       string q= ans.substr(lps[s.size()-1]);
        reverse(q.begin(),q.end());
        return q+ans;

    }
};
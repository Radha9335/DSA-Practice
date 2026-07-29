#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    int atmost(string& s, int k){
        
        int n=s.length();
        int l=0;
        int count=0;
        
        vector<int>freq(26,0);
        int distct=0;
        
        for(int r=0;r<n;r++){
            freq[s[r]-'a']++;
            if(freq[s[r]-'a']==1) distct++;
            while(distct>k){
                freq[s[l]-'a']--;
                if(freq[s[l]-'a']==0){
                    distct--;
                }
                l++;
                
            }
            
            count+=r-l+1;
            
        }
        return count;
    }
  
    int countSubstr(string& s, int k) {
        if(k==0){
            return 0;
        }
        return atmost(s,k)-atmost(s,k-1);
    }
};




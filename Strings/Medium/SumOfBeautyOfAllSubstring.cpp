#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int beautySum(string s) {
        int n=s.length();

        int ans=0;
        for(int i=0;i<n;i++){
            vector<int>freq(26,0);
        for(int j=i;j<n;j++){
            freq[s[j]-'a']++;
            int minfreq=INT_MAX;
            int maxfreq=0;

                for(int k=0;k<26;k++)
                   { 
                    if(freq[k] > 0){
                     maxfreq = max(maxfreq, freq[k]);
                     minfreq = min(minfreq, freq[k]);
                        }
                     }
                     ans+=maxfreq-minfreq;
             }
             
        }
        return ans;
    }
};
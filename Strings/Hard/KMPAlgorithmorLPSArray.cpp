#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void getlps(vector<int>&lps,string needle){
        int pre=0;
        int suf=1;
        while(suf<needle.size()){
            if(needle[pre]==needle[suf]){
                lps[suf]=pre+1;
                pre++;
                suf++;
            }
            else{
                if(pre==0){
                    lps[suf]=0;
                    suf++;
                }
                else{
                    pre=lps[pre-1];
                }
            }
        }
    }

    int strStr(string haystack, string needle) {
        int m=haystack.size();
        int n=needle.size();
        vector<int>lps(needle.size(),0);
        getlps(lps,needle);


        int first=0,sec=0;
        while(first<m && sec<n){

            if(haystack[first]==needle[sec]){
                first++;
                sec++;
            }
            else{
                if(sec==0){
                    first++;
                }
                else{
                    sec=lps[sec-1];
                }
            }
            
        }
        if(sec==n) return first-sec; 
        return -1;
    }
};
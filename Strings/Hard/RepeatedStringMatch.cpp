#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void findlps(vector<int>& lps,string b){
        int pre=0;
        int suf=1;

        while(suf<b.size()){
            if(b[pre]==b[suf]){
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

    int kmp_match(string temp, string& b){
        vector<int>lps(b.size(),0);
        findlps(lps,b);
        int first=0;
        int sec=0;
        while(first<temp.size() && sec<b.size()){
            if(temp[first]==b[sec]){
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
        if(sec==b.size()) return 1;
        return 0;
    }

    int repeatedStringMatch(string a, string b) {
    if(a==b) return 1;
    int repeat=1;

    string temp=a;
    while(temp.size()<b.size()){
        temp+=a;
        repeat++;
    }

    // kmp pattern search

    if(kmp_match(temp,b)==1) return repeat;

    // temp+a,kmp search
    if(kmp_match(temp+a,b)==1) return repeat+1;

    return -1;

    }

};
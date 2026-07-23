#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int count =0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                count++;
                if(count>1){
                    ans+=s[i];
                }
            }
            else{
                if(count>1){
                    ans+=s[i];
                }
                count--;
            }
        }
        return ans;
    }
};


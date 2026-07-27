#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int n=s.length();

        int dep=0;
        int mdep=0;

        for(int i=0;i<n;i++){
            if(s[i]=='('){
                dep++;
                mdep=max(dep,mdep);
            }
            else if(s[i]==')'){
                dep--;
            }
        }
        return mdep;
    }
};
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        
        int n=num.length();
    

        for(int i=n-1;i>=0;i--){
            int r=(int)num[i]-'0';
            if(r%2!=0){
                return num.substr(0,i+1);
            }
            
        }
      return "";
    }
};
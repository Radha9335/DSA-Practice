#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int maxLength(vector<int>& arr) {
       unordered_map<int,int>m;
       int preS=0;
       m[preS]=-1;
       int len=0;
       for(int i=0;i<arr.size();i++){
           preS+=arr[i];
           
           if(m.count(preS)){
               len=max(len,i-m[preS]);
           }
           else{
               m[preS]=i;
           }
       }
       
       return len;
        
    }
};
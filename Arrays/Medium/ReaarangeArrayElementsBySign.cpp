#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos=0;
        int neg=1;
        int n=nums.size();
        vector<int>v(n);
        for(int i=0;i<nums.size();i++){

            if(nums[i]>=0){
                v[pos]=nums[i];
                pos=pos+2;
            }
            else{
                v[neg]=nums[i];
                neg+=2;
            }
           
        }  
return v;
        
    }
};
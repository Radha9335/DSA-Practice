#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
     vector<int>v;
     sort(nums.begin(),nums.end());

     int j=0;




    for(int i=1;i<nums.size();i++){
        if(nums[i]==nums[i-1]){
            v.push_back(nums[i]);
            break;
        }
    }

      for(int i=1;i<nums.size();i++){
         if((nums[i]-nums[i-1])==2){
            v.push_back(nums[i-1]+1);
            break;
        }
    }   

    return v;



    }
};
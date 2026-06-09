#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        
      long long total=0;
      long long pro=1;
      int size;  
      int start=0;
      int end=0;
      long long sum=0;

      while(end<nums.size() ){
        size=(end-start)+1;

        sum+=nums[end];
        pro=sum*size;

        while(pro>=k){

            sum=sum-nums[start];
            size--;
            pro=sum*size;
            start++;

        }
        total+=(end-start)+1;

        end++;

      }  

      return total;

    }
};
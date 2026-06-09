#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int total=INT_MAX;
        int sum=0;
        int start=0,end=0;

        while(end<nums.size()){
            sum+=nums[end];    
            while(sum>=target){
            total=min(total,(end-start)+1);
            sum=sum-nums[start];
            start++;
            }


            end++;

        }
        return total==INT_MAX?0:total;
    }
};
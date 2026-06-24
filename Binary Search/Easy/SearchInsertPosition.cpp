#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=n;
        if(target>nums[n-1]) return n;

        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]>target){
                ans=min(ans,mid);
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
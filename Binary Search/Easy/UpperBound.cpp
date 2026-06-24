#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int upperBound(vector<int>& nums, int x) {
        // code here
        int n=nums.size();
        int low=0;
        int high=n-1;
        if(x>=nums[n-1]) return n;
        int ans=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>x){
                ans=min(mid,ans);
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};

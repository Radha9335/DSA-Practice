#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
   int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=-1;
        if(nums[0]>x) return -1;
        while(low<=high){
            int mid=(low+high)/2;
            
           if(nums[mid]<=x){
                ans=max(mid,ans);
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};
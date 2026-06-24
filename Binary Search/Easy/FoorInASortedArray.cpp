#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int findFloor(vector<int>& nums, int x) {
        // code here
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

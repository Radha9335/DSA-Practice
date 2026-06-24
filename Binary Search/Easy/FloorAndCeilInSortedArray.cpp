#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
   int n=nums.size();
   vector<int>v;
        int low=0;
        int high=n-1;
        int ans=-1;
        int ans2=-1;
       

        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==x){
                return {x,x};
            }
           else if(nums[mid]<=x){
                ans=nums[mid];
                low=mid+1;
            }
            else{
                ans2=nums[mid];
                high=mid-1;
            }
        }
        return {ans,ans2};

    }
};





#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countFreq(vector<int>& nums, int target) {
        // code here
        
        
        
        int n=nums.size();
        
        int low=0;
        int high=n-1;

        int fo=-1;
        int lo=-1;

        while(low<=high){
            int mid=low+(high-low)/2;


            if(nums[mid]==target){
                fo=mid;
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

        low=0 , high=n-1;

        while(low<=high){
            int mid=low+(high-low)/2;


            if(nums[mid]==target){
                lo=mid;
                low=mid+1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        if(fo==-1) return 0;
        return lo-fo+1;
        
        
        
    }
};

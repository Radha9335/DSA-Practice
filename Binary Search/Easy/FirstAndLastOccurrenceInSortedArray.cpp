#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>v(2);
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
        v[0]=fo;
        v[1]=lo;
        return v;
    }
};

#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int findKRotation(vector<int> &nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int piv=-1;
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;

            if(nums[low]<=nums[high]){
                if(nums[low]<ans){
                    piv=low;
                    ans=nums[low];
                }
                break;
            }
            else if(nums[low]<=nums[mid]){
                if(nums[low]<ans){
                    piv=low;
                    ans=nums[low];
                }
                low=mid+1;
            }
            else{
                if(nums[mid]<ans){
                    piv=mid;
                    ans=nums[mid];
                }
                high=mid-1;
            }
        }
        return piv;
        
     }
};

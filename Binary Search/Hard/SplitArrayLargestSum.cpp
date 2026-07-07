#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();


        int ans=0;
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxi=max(maxi,nums[i]);
        }
        
        int low=maxi;
        int high=sum;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            int p=1;
            int ct=0;
            
            for(int i=0;i<n;i++){
                
                if(ct+nums[i]<=mid){
                    ct+=nums[i];
                }
                
                else{
                    p++;
                    ct=nums[i];
                }
            }
            if(p<=k){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        return ans;
    }
};
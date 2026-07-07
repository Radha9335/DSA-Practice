#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        int n=arr.size();
        if(n<k) return -1;
        int ans=0;
        int maxi=INT_MIN;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            maxi=max(maxi,arr[i]);
        }
        
        int low=maxi;
        long long high=sum;
        
         while(low<=high){
            long long mid=low+(high-low)/2;
            int p=1;
            long long ct=0;
            
            for(int i=0;i<n;i++){
                
                if(ct+arr[i]<=mid){
                    ct+=arr[i];
                }
                
                else{
                    p++;
                    ct=arr[i];
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
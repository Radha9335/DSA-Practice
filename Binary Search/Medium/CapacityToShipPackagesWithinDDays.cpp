#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            maxi=max(weights[i],maxi);
            sum+=weights[i];
        }

        int low=maxi;
        int high=sum;
        int ans=0;
        
        while(low<=high){
            int cWt=0;
            int count=1;
            int mid=(low+(high-low)/2);
            for(int i=0;i<n;i++){
                if(cWt+weights[i]<=mid){
                    cWt+=weights[i];
                }

                // if(cWt<=mid)
                else {
                    count++;
                    cWt=weights[i];

                }
            }
            if(count<=days){
                    ans =mid;
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            
        }
        return ans;
    }
};
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool isPossible(int day, vector<int>& bloomDay, int m, int k){
        int count=0;
        int noBouquets=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                count++;
            }
            else{
                noBouquets+=(count/k);
                count=0;
            }
             
        }
        noBouquets+=(count/k);
        if(noBouquets>=m) return true;
        return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if((long long)m*k>n) return -1;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            mini=min(bloomDay[i],mini);
            maxi=max(bloomDay[i],maxi);
        }
        int low=mini;
        int high=maxi;
        int ans=-1;
        while(low<=high){
            int mid=(low+(high-low)/2);
            if(isPossible(mid,bloomDay,m,k)==true){
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


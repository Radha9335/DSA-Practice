#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(piles[i],maxi);
        }

        int low=1;
        int high=maxi;
        int ans=0;
        while(low<=high){
            long long hours=0;
            int mid=low+(high-low)/2;
            for(int i=0;i<n;i++){
                hours+=((piles[i]+mid)-1)/mid;
            }
            if(hours<=h){
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
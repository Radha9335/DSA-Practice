#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxP=nums[0];
        int minP=nums[0];
        int msP=nums[0];

        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(maxP,minP);
            }
        
                maxP=max(nums[i],nums[i]*maxP);
                minP=min(nums[i],nums[i]*minP);
                msP=max(msP,maxP);
            
        }
        return msP;
    }
};
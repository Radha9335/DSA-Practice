#include<bits/stdc++.h>
using namespace std;

class Soulution{
    public:
    int missingNumber(vector<int>&nums){
     int actSum=0,sum=0;
        for(int i=0;i<=nums.size();i++){
            actSum+=i;
        }

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }

        return actSum-sum;
    }
};
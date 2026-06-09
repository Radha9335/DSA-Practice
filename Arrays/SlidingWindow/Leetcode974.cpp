#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int total=0;
        int preSum=0;
        unordered_map<int,int>m;
        m[0]=1;
        int rem;
        for(int i=0;i<nums.size();i++){
            preSum+=nums[i];
            rem=preSum%k;
            if(rem<0){
                rem=k+rem;
            }
            if(m.count(rem)){
                total+=m[rem];
                m[rem]++;
            }
            else{
                m[rem]++;
            }
        }
        return total;
    }
};
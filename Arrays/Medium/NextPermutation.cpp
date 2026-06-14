#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        
        int piv=-1;
        int pividx=-1;

        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                piv=nums[i];
                pividx=i;
                break;
            }
        }

        if(piv==-1){
            reverse(nums.begin(),nums.end());
            return ;
        }


        for(int i=n-1;i>=pividx+1;i--){
            if(nums[i]>piv){
                    swap(nums[pividx], nums[i]);
                    break; 
                    
            }
        
        }
        reverse(nums.begin()+pividx+1,nums.end());


    }
};
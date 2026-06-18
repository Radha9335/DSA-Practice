#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void merge(int low, int mid , int high , vector<int>& nums){
        vector<int>temp;
        int left=low;
        int right=mid+1;
        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left++]);
            }
            else{
                temp.push_back(nums[right++]);
            }

        }
        while(left<=mid){
            temp.push_back(nums[left++]);
        }

        while(right<=high){
            temp.push_back(nums[right++]);
        }

        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }

    }

    int CountPairs(int low, int mid , int high , vector<int>& nums){
        int cnt=0;
        int right=mid+1;

        for(int i=low;i<=mid;i++){

            while(right<=high && nums[i]>(long long)2*nums[right]){
                right++;
            }
            cnt=cnt+(right-(mid+1));
        }
        return cnt;
    }

    int mergeSort(int low, int high , vector<int>& nums){
        int cnt=0;
        if(low>=high) return cnt;
        int mid=low+((high-low)/2);
        cnt+=mergeSort(low,mid,nums);
        cnt+=mergeSort(mid+1,high,nums);
        cnt+=CountPairs(low,mid,high,nums);
        merge(low,mid,high,nums);
        return cnt;
    }

    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        return mergeSort(0,n-1,nums);
    }
};





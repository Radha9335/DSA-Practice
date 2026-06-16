#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
  
  
  
  int merge(int low, int mid ,int high, vector<int>&nums){
        int left=low;
        int right=mid+1;
        vector<int>temp;
        int count=0;
        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                count+=(mid-left+1);
                right++;
            }
        }

        while(left<=mid){
            temp.push_back(nums[left]);
                left++;
        }

        while(right<=high){
            temp.push_back(nums[right]);
                right++;
        }
        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }
        return count;
    }

    int mergeSort(int low, int high, vector<int>&nums){
        int cnt=0;
        if(low>=high) return cnt;
        int mid=(high+low)/2;
        cnt+=mergeSort(low,mid,nums);
        cnt+=mergeSort(mid+1,high,nums);
        cnt+=merge(low,mid,high,nums);
        return cnt;
    }

  
  
  
    int inversionCount(vector<int> &arr) {
        // Code Here
        int low=0;
    int high=arr.size()-1;
    

    return mergeSort(low,high,arr);
        
    }
};
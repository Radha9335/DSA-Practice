#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
  
    int FirstOccurence(vector<int> &arr, int target){
        int n=arr.size();
        int l=0;
        int h=n-1;
        
        int fo=-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            
            if(arr[mid]==target){
                fo=mid;
                h=mid-1;
            }
            else if(arr[mid]<target){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return fo;
        
    }
  
    int rowWithMax1s(vector<vector<int>> &arr) {
        int m=arr.size();
        int n=arr[0].size();
        int maxones=-1;
        int idx=-1;
        int ans=-1;
        for(int i=0;i<m;i++){
            int ones=0;
            
            idx = FirstOccurence(arr[i],1);
            
            if(idx!=-1){
            ones = n-idx;
            
            if(maxones<ones){
                maxones=ones;
                ans=i;
            } 
            
        }
            
            
            
        }
        return ans;
        
    }
};
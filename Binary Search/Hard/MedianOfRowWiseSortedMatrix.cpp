#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    int UpperBound(vector<int> &nums, int x){
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>x){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
  
    int smallerEquals(vector<vector<int>> &mat,int x){
        int m=mat.size();
        int n=mat[0].size();
       
        int count=0;
        for(int i=0;i<m;i++){
            
           count+= UpperBound(mat[i],x);
            
        }
        return count;
    }
  
  
  
    int median(vector<vector<int>> &mat) {
       int m=mat.size();
       int n=mat[0].size();
       
       
       int low =INT_MAX;
       int high=INT_MIN;
       
       for(int i=0;i<m;i++){
           low=min(mat[i][0],low);
           high=max(mat[i][n-1],high);
       }
       
       
       int req=(m*n)/2;
       
       while(low<=high){
           int mid=low+(high-low)/2;
           
           int c=smallerEquals(mat,mid);
           
           if(c<=req){
               low=mid+1;
           }
           else{
               high=mid-1;
           }
       }
       return low;
    }
    
};

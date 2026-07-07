#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxEleRowIdx(vector<vector<int>>& mat,int m,int n, int col){
        int mIdx=-1;
        int maxVal=-1;
        for(int i=0;i<m;i++){
            if(mat[i][col]>maxVal){
                maxVal=mat[i][col];
                mIdx=i;
            }
        }
        return mIdx;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();

        int low=0;
        int high=n-1;


        while(low<=high){
            int mid=low+(high-low)/2;

            int rIdx=maxEleRowIdx(mat,m,n,mid);

            int left=mid-1>=0?mat[rIdx][mid-1]:-1;
            int right=mid+1<n?mat[rIdx][mid+1]:-1;

            if(mat[rIdx][mid]>left && mat[rIdx][mid]>right){
                return {rIdx,mid};
            }
            else if(mat[rIdx][mid]<left){
                high=mid-1;
            }

            else{
                low=mid+1;
            }
        }
        return {-1,-1};
    }
};
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>v;
    int top=0,left=0;
    int bottom=m-1,right=n-1;


    while(top<=bottom && left<=right){

        for(int i=left;i<=right && top<=bottom && left<=right;i++){
            v.push_back(matrix[top][i]);
    }
    top++;

    for(int i=top;i<=bottom && top<=bottom && left<=right;i++){
        v.push_back(matrix[i][right]);
    }
    right--;
    for(int i=right;i>=left && top<=bottom && left<=right;i--){
        v.push_back(matrix[bottom][i]);
    }
    bottom--;

    for(int i=bottom;i>=top && top<=bottom && left<=right;i--){
        v.push_back(matrix[i][left]);
    }
    left++;

    }
return v;

    }
};
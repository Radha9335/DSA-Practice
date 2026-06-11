#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();

        int cr=-1,cc=-1;
        vector<int>rows;
        vector<int>col;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    rows.push_back(i);
                    col.push_back(j);
                }
            }
        }

            for(int i=0;i<rows.size();i++){
                int nr=rows[i];
                for(int j=0;j<c;j++){
                 matrix[nr][j]=0;
                }
            }
              for(int i=0;i<col.size();i++) {
                    int nc=col[i];
                    for(int j=0;j<r;j++){
                     matrix[j][nc]=0;
                     }  
              } 

    }
};
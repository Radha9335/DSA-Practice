#include<bits/stdc++.h>
using namespace std;

class Solution {
    public void rotate(int[][] matrix) {
        int r=matrix.length;
      
        for(int i=0;i<r;i++){
            for(int j=0;j<r;j++){
                
                if(i<j){
                    int temp=matrix[i][j];
                    matrix[i][j]=matrix[j][i];
                    matrix[j][i]=temp;
                }

            }
        }

        for(int i=0;i<r;i++){
            for(int j=r-1;j>=r/2;j--){
            
                int temp=matrix[i][j];
                matrix[i][j]=matrix[i][(r-1)-j];
                matrix[i][(r-1)-j]=temp;

            }
        }






    }
}
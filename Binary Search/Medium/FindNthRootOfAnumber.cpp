#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int nthRoot(int N, int M) {
        // Code here
        int low=0;
       int high=M;
       int ans=-1;

       while(low<=high){
        int mid=(low+high)/2;
        if(pow(mid,N)==M) return mid;
        else if(pow(mid,N)<M){
            low=mid+1;
        }
        else{
         high=mid-1;   
        }
       }
       return -1;
    }
};



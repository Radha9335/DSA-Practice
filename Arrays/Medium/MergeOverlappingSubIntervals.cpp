#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int r=intervals.size();
        
        sort(intervals.begin(),intervals.end());

        vector<vector<int>>v;
        v.push_back(intervals[0]);
        int curr=intervals[0][0];
       

        for(int i=1;i<r;i++){
            if(intervals[i][0]<=v.back()[1]){
                v.back()[1]=max(v.back()[1],intervals[i][1]);
            }
            else{
                v.push_back(intervals[i]);
            }
            
        }
        return v;
    }
};
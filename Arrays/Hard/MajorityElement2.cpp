#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>v;
        int n=nums.size();
        unordered_map<int,int>m;

        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto i:m){
            int num=i.first;
            int freq=i.second;
            if(freq>n/3){
                v.push_back(i.first);
            }
        }
        return v;
    }
};
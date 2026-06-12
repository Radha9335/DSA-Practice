#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        vector<int>arr;

        while(i<nums1.size() && j<nums2.size()){

            while(i<nums1.size()-1 && nums1[i]==nums1[i+1] ){
                i++;
            }

            while(j<nums2.size()-1  && nums2[j]==nums2[j+1]){
                j++;
            }

            if(nums1[i]==nums2[j]){
                arr.push_back(nums2[j]);
                i++;
                j++;
            }

            else if(nums1[i]<nums2[j]){
                 arr.push_back(nums1[i]);
                i++;
            }

            else{
                 arr.push_back(nums2[j]);
                j++;
            }
        }

        while(i<nums1.size()){
             while(i<nums1.size()-1 &&nums1[i]==nums1[i+1]){
                i++;
            }
             arr.push_back(nums1[i]);
            i++;


        }

        while(j<nums2.size()){
            while(j<nums2.size()-1  &&nums2[j]==nums2[j+1]){
                j++;
            }
             arr.push_back(nums2[j]);
            j++;
        }

        return arr;

    }
};
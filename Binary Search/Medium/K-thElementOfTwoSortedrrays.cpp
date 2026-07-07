#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int kthElement(vector<int> &nums1, vector<int> &nums2, int k) {
        // code here
        int n1=nums1.size();
        int n2=nums2.size();
        if(n1>n2) return kthElement(nums2,nums1,k);
        
        int low=max(0,k-n2);
        int high=min(n1,k);
        
        while(low<=high){
        int cut1=(low+high)/2;
        int cut2=k-cut1;
        int l1=cut1==0?INT_MIN:nums1[cut1-1];
        int l2=cut2==0?INT_MIN:nums2[cut2-1];
        int r1=cut1==n1?INT_MAX:nums1[cut1];
        int r2=cut2==n2?INT_MAX:nums2[cut2];


        if(l1<=r2 && l2<=r1){
            return max(l1,l2);
        }
        
        else{
            
            if(l2>r1){
            low=cut1+1;
        }
        
        else{ 
            high=cut1-1;
        }
        
        }
}
return 0.0;

    }
};
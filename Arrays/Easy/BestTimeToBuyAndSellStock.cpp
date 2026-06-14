#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro=0;
        int bb=prices[0];

        for(int i=1;i<prices.size();i++){
            if(prices[i]<bb){
                bb=prices[i];
            }
            else{
                maxPro=max(maxPro,bb-prices[i]);
            }
        }
        return maxPro;
    }
};
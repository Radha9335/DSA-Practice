#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>fm;
        priority_queue<pair<int,char>>pq;
        string ans="";
        for(int i=0;i<s.length();i++){
            fm[s[i]]++;
        }

        for(auto it:fm){
            pq.push({it.second,it.first});
        }


        while(!pq.empty()){
            for(int i=0;i<pq.top().first;i++){
                ans+=pq.top().second;
            }
            pq.pop();
        }
        return ans;
    }
};
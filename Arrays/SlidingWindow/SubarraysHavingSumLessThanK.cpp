#include <bits/stdc++.h>
using namespace std;


long long SubarraysHavingSumLessThanK(vector<int>&arr,int k){

int total=0;
int sum=0;
int start=0;
int end=0;

while(end<arr.size()){
    sum+=arr[end];

    while(sum>=k){
        sum-=arr[start];
        start++;
    }
    total+=(end-start)+1;
    end++;
}
return total;
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cin>>k;
    cout<<SubarraysHavingSumLessThanK(arr,k);
}
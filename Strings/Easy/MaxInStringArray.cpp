#include<bits/stdc++.h>
using namespace std;

int main(){

    string str[] = {"00123","456","0897","000231"};
    int maxi=stoi(str[0]);

    for(int i=1;i<4;i++){
        int x=stoi(str[i]);
        if(x>maxi) maxi = x;
    }
    cout<<maxi;
}
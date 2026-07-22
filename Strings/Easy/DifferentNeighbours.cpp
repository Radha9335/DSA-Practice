#include<bits/stdc++.h>
using namespace std;

int main(){

    string str ;
    cin>>str;

    int ct=0;
    int n=str.length();
    for(int i=0;i<n;i++){

        if(n==1){
            ct=1;
            break;
        }

        if(n==2 && str[0]!=str[1]){
            ct=2;
            break;
        }

        if(i==0){
            if(str[i]!=str[i+1]){
                ct++;
            }
        }
        else if(i==n-1){
            if(str[i]!=str[i-1]){
                ct++;
            }
        }

        else if(str[i]!=str[i-1] && str[i]!=str[i+1]){
            ct++;
        }
    }

    cout<<ct;
}
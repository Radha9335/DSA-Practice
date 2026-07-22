#include<bits/stdc++.h>
using namespace std;

int main(){

    string str = "My name is Radha Jha. I am Radha Jha.";

    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    int ct=1,mct=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) ct++;
        else ct=1;
        mct=max(ct,mct);
    }
      ct=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) ct++;
        else ct=1;
        if(ct==mct){
            cout<<v[i]<<" : "<<mct<<endl;
        }
    }

}
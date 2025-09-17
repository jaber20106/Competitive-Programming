#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int n,i;
    cin>>n;
    vector<int>v(n);
    for(i = 0; i < n; i++){
        cin>>v[i];
    }
    for(i = 1; i < n; i++){
        v[i] = v[i] + v[i-1];
    }
    for(i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}
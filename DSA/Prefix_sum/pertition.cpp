// Chect if array can be pertitioned into 2 continiour arrays of equal sum.

#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    int m = v.size();
    for(int i = 1; i < m; i++){
        v[i] += v[i-1];
    }
    bool flag = 0;
    for(int i = 1; i < m; i++){
        if(2 * v[i] == v[n-1]){
            flag = 1;
            break;
        }
    }
    if(flag == 1) cout<<"yes"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}
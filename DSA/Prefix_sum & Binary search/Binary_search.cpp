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
    int t;
    cin>>t;
    
    int lo = 0,mid; 
    int hi = n-1;
    bool flag = false;
    
    while(lo <= hi){
        mid = lo + (hi - lo) / 2;
        if(v[mid] == t) flag = true;
        else if(v[mid] > t) hi = mid - 1;
        else lo = mid + 1;
    }
    if(flag == true) cout<<mid<<endl;
    else cout<<"-1"<<endl;
    
    return 0;
}
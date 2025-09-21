#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int n,q;
    cin>>n>>q;
    vector<long long>v(n+1);
    for(int i = 1; i <= n; i++){
        cin>>v[i];
    }
    for (int i = 2; i <= n; i++) {
        v[i] = v[i] + v[i-1];
    }

    while (q--)
    {
        int l,r;
        long long sum;
        cin>>l>>r;
        if(l == 1) sum = v[r];
        else{
            sum = v[r] - v[l-1];
        }
        cout<<sum<<endl;

    }
    
    return 0;
}
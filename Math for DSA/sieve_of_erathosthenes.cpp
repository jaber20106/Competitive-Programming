#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int count = 0;
    vector<bool>isprime(n+1,true);
    for(int i = 2; i < n; i++){
        if(isprime[i]){
            count++;

            for(int j = i * 2; j < n; j+=i){
                isprime[j] = false;
            }
            
        }
        
    }
    cout<<count<<" ";
    
    return 0;
}
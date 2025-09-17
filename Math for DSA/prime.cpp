#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int n,i;
    cin>>n;
    bool isprime = false;
    for(i = 1; i <= 100; i++){
        for(int j = 2; j < n; j++){
            if(n % j == 0){
                isprime = true;
                break;
            }
        }
    }
    cout<<i<<" ";
    
    return 0;
}
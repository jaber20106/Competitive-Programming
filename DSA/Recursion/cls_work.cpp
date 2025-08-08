#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

void fun(int n){    
    if(n == 0) return;
    cout<<"Hello jaber"<<endl;
    fun(n-1);
}

int main(){
    int n;
    cin>>n;
    
    fun(n);

    return 0;
}
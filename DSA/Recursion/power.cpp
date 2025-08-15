#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
int power(int a,int b){
    if(b == 0) return 1;
    return a*power(a,b-1);
}

int main(){
    
    int a;
    cout<<"Enter base: ";
    cin>>a;
    int b;
    cout<<"Enter exponent: ";
    cin>>b;
    cout<<power(a,b)<<endl;

    return 0;
}
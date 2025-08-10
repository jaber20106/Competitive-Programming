#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
int sum(int n){
    //base case
    if(n == 1 || n == 0) return 1;
    //recursive call
    return n + sum(n-1);
}

int main(){
   cout<<sum(5);
}
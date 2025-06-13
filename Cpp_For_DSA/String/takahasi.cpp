#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    string s, t;
    cin>>s>>t;
    int x = t.size();
    for(int i = 0; i < x; i++){
        t.pop_back();
    }
    string y = "san";
    cout<<s<<" "<<y<<endl;


    return 0;
}
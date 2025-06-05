#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(6);
    v.push_back(10);
    v.push_back(7);
    v.push_back(11);
    v.push_back(6);
    v.push_back(21);
    int n;
    cin>>n;
    int ind = -1;
    for(int i = v.size(); i > 0; i--){
        if(v[i] == n){
            ind = i;
            break;
        }
       
    }
    cout<<ind<<endl;

}
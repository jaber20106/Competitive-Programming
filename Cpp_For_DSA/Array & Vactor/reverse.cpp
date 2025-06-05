#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v1(n);
    for(int i = 0; i < n; i++){
        cin>>v1[i];
    }
    vector<int>v2(v1.size());
    for(int i = 0; i < v1.size(); i++){
        int j = v1.size() - 1 - i;
        v2[i] = v1[j];
    }

    for(int i = 0; i < n; i++){
        cout<<v2[i]<<" ";
    }
    
}
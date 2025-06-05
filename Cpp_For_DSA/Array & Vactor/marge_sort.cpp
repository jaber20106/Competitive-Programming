#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr1(n);
    for(int i = 0; i < n; i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    vector<int>arr2(m);
    for(int i = 0; i < m; i++){
        cin>>arr2[i];
    }
    vector<int>v(n+m);
    int i = 0;
    int j = 0;
    int k = 0;
    while(i <= n-1 && j <= m-1){
        if(arr1[i] < arr2[j]){
            v[k] = arr1[i];
            i++;
        }
        else{
            v[k] = arr2[j];
            j++;
        }
        k++;
    }
    if(i == n){
        while(j <= m-1){
            v[k] = arr2[j];
            k++;
            j++;
        }
    }
    if(j == m){
        while(i <= n-1){
            v[k] = arr1[i];
            k++;
            i++;
        }
    }
    for(int i = 0; i < n+m; i++){
        cout<<v[i]<<" ";
    }
}
#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < n-1; i++){
        int mindx = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[mindx]){
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
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
    int target;
    cin>>target;
    bool flag = false;
    int lo = 0; 
    int hi = n-1;
    
    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(arr[mid] == target){
            cout<<arr[mid+1]<<endl;
            flag = true;
            break;
        }
        else if(arr[mid] < target){
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
        
    }
    if(flag == false) cout<<arr[lo]<<endl;

    return 0;
}
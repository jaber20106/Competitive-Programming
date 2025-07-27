#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int tar;
    cin>>tar;
    bool flag = false;

    int lo = 0;
    int hi = n-1;

    while(lo <= hi){
        int mid = (lo + hi) / 2;

        if(arr[mid] == tar){
            cout<<mid<<endl;
            flag = true;
            break;
        }
        // Left half is sorted
        if (arr[lo] <= arr[mid]) {
            if (arr[lo] <= tar && tar < arr[mid]) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        // Right half is sorted
        else {
            if (arr[mid] < tar && tar <= arr[hi]) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
    }
    if(flag == false){
        cout <<-1 << endl;
    }
}

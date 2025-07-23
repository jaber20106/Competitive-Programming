// {1,2,3,1,3,3,3,4,5,6} ans = index = 7 because 3 is last occurence.

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

    int lo = 0;
    int hi = n-1;
    bool found = false;
    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(arr[mid] == target){
            if(arr[mid + 1] != target){
                found = true;
                cout<<mid;
                break;
            }
            else{
                lo = mid + 1;
            }
        }
        else if(arr[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    if(found == false) cout<<-1<<endl;

    return 0;
}
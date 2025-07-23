#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int target){
    int lo = 0;
    int hi = n-1;
    bool found = false;
    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(arr[mid] == target){
            if(mid == 0 || arr[mid - 1] != target){
                found = true;
                return mid;
            }
            else{
                hi = mid - 1;
            }
        }
        else if(arr[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    if(found == false) return -1;
}

int lastOccurrence(int arr[], int n, int target){
    int lo = 0;
    int hi = n-1;
    bool found = false;
    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(arr[mid] == target){
            if(mid == n - 1 || arr[mid + 1] != target){
                found = true;
                return mid;
            }
            else{
                lo = mid + 1;
            }
        }
        else if(arr[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    if(found == false) return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int target;
    cin>>target;

    int first = firstOccurrence(arr, n, target);
    int last = lastOccurrence(arr,n,target);

    cout << "[" << first << "," << last << "]" << endl; 

    return 0;
}

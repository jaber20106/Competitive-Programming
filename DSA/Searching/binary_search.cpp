#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int lo = 0, hi = n - 1;
    bool found = false;

    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(arr[mid] == target){
            cout << mid << endl;
            found = true;
            break;
        }
        else if(arr[mid] < target){
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }

    if(!found){
        cout << -1 << endl; 
    }

    return 0;
}

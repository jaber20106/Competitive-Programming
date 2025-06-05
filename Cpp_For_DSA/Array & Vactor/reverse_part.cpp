#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&b){
    for(int i = 0; i < b.size(); i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}
void reversepart(int i,int j,vector<int>&v){
    while(i <= j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0; i < v.size(); i++){
        cin>>v[i];
    }
    // int i = 0; 
    // int j = v.size() - 1;
    // while(i <= j){
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    //     i++;
    //     j--;
    // }
    reversepart(0,2,v);
    display(v);
}
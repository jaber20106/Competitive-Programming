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
    int k;
    cin>>k;

    //rotate
    if(k>n) k = k % n;
    int x = v.size();
    reversepart(0,x-k-1,v);
    reversepart(x-k,x-1,v);
    reversepart(0,x-1,v);
    display(v);
}
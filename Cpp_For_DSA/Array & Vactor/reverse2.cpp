#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&b){
    for(int i = 0; i < b.size(); i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0; i < v.size(); i++){
        cin>>v[i];
    }
    int i = 0; 
    int j = v.size() - 1;
    // while(i <= j){
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    //     i++;
    //     j--;
    // }
    reverse(v.begin(),v.end());
    display(v);
}
#include<bits/stdc++.h>
using namespace std;

void display(vector<int>&v){
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void sortm1(vector<int>&v){
    int noz = 0; 
    int noo = 0; 
    int noT = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == 0) noz++;
        else if(v[i] == 1) noo++;
        else noT++;
    }
    for(int i = 0; i < v.size(); i++){
        if(i < noz) v[i] = 0;
        else if(i < noz + noo) v[i] = 1;
        else v[i] = 2;
    }
}

int main(){
    int n;
    cin>>n; 
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    sortm1(v);
    display(v);

}
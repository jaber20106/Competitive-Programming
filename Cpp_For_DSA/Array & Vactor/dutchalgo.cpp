#include<bits/stdc++.h>
using namespace std;

void display(vector<int>&v){
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
//Methode 1.
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
//Methode 2.
void sortm2(vector<int>&v){
    int n = v.size();
    int lo = 0; 
    int mid = 0; 
    int hi = n-1;
    // mid niye kaj korbo.
    while(mid <= hi){
        if(v[mid] == 2){
            int temp = v[mid];
            v[mid] = v[hi];
            v[hi] = temp;
            hi--;
        }
        else if(v[mid] == 0){
            int temp = v[lo];
            v[lo] = v[mid];
            v[mid] = temp;
            lo++;
            mid++;
        }
        else{
            mid++;
        }
    }
}
int main(){
    int n;
    cin>>n; 
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    sortm2(v);
    display(v);
}
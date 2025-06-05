#include<bits/stdc++.h>
using namespace std;
void sort01m1(vector<int>&v){ // Methode 1
    int noz = 0; 
    int noo = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == 0) noz++;
        else noo++;
    }
    for(int i = 0; i < v.size(); i++){
        if(i < noz) v[i] = 0;
        else v[i] = 1;
    }
}
void sort01m2(vector<int>&v){ // Methode 2
    int n = v.size();
    int i = 0; 
    int j = n - 1; 
    while(i < j){
        if(v[i] == 0) i++;
        else if(v[j] == 1) j--;
        else if(v[i] == 1 && v[j] == 0){
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;

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
    sort01m2(v);
    for(int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
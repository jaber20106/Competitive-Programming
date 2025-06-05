#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&v){
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void sort(vector<int>&v){
    int i = 0;
    int j = v.size()-1;
    while(i <= j){
        if(v[i]>0) i++;
        else if(v[j] < 0) j--;
        else if(v[i] < 0 && v[j] > 0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
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
    sort(v);
    display(v);

}
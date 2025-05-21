#include<iostream>
using namespace std;
int hcf(int a,int b){
    int big = 1;
    for(int i = min(a,b); i >= 1; i--){
        if(a % i == 0 && b % i == 0){
            big = i;
            break;
        }
    }
    return big;
}
int main(){
    int a;
    cout<<"Enter number of a: ";
    cin>>a;
    int b;
    cout<<"Enter number of b: ";
    cin>>b;
    cout<<hcf(a,b)<<endl;
}
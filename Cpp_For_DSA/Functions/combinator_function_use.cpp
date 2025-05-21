#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i = 2; i <= x; i++){
        f *= i;
    }
    return f;
}
int combination(int n,int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int main(){

    int n;
    cout<<"Enter of n: ";
    cin>>n;
    cout<<"Enter of r: ";
    int r;
    cin>>r;
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    int ncr = combination(n,r);
    cout<<ncr<<endl;



}
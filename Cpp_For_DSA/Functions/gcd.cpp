#include<iostream>
using namespace std;
int gcd(int a,int b){
    int g = 1;
    for(int i = 1; i <= min(a,b); i++){
        if(a%i == 0 && b%i == 0){
            g = i;
        }
    }
    return g;
}

int main(){

    int a;
    cout<<"Enter 1st number: ";
    cin>>a;
    int b;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<gcd(a,b)<<endl;

}
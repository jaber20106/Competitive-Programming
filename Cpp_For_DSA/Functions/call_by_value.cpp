#include<iostream>
using namespace std;
void chang(int a){
    a += 10;
    cout<<a;
}
int main(){
    int a;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<a<<endl;
    chang(a);
}

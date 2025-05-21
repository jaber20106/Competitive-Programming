#include<iostream>
using namespace std;

void chang(int &a){
    cout << "Inside function chang()..." << endl;
    cout << "Value before change: " << a << endl;
    a += 10;
    cout << "Value after change: " << a << endl;
}

int main(){
    int a;
    cout << "Enter value of a: ";
    cin >> a;


    chang(a); // Call by Reference

    cout << "\nAfter calling chang(), value of a: " << a << endl;

    return 0;
}

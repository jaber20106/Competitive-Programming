#include<iostream>
using namespace std;
void reversearray(int arr[],int n){
    int i = 0;
    int j = n - 1;

    while(i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calling function to reverse array
    reversearray(arr, n);
    

    cout << "Reversed array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

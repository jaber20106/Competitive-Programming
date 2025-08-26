#include <bits/stdc++.h>
using namespace std;

int power(int x, int n) {
    if(n == 0) return 1;   // base case 1
    if(n == 1) return x;   // base case 2

    int ans = power(x, n / 2);

    if(n % 2 == 0)   return ans * ans;
      
    else  return ans * ans * x;
       
}

int main() {
    cout << power(3, 5);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums;
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> x;
        nums.push_back(x);
    }

    vector<int> pre(n), suf(n), ans(n);

    // Prefix Product
    int p = nums[0];
    pre[0] = 1;
    for(int i = 1; i < n; i++) {
        pre[i] = p;
        p *= nums[i];
    }

    // Suffix Product
    p = nums[n-1];
    suf[n-1] = 1;
    for(int i = n-2; i >= 0; i--) {
        suf[i] = p;
        p *= nums[i];
    }

    // Answer
    for(int i = 0; i < n; i++) {
        ans[i] = pre[i] * suf[i];
    }

    cout << "Product Except Self: ";
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}

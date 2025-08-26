#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> a, vector<int> b) {
    vector<int> c;
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;

    while (i < n1 || j < n2) {
        if (i >= n1) {
            c.push_back(b[j]);
            j++;
        }
        else if (j >= n2) {
            c.push_back(a[i]);
            i++;
        }
        else if (a[i] <= b[j]) {
            c.push_back(a[i]);
            i++;
        }
        else {
            c.push_back(b[j]);
            j++;
        }
    }

    return c;
}

int main() {
    int x, i;
    cin >> x;
    vector<int> v(x);
    for (i = 0; i < x; i++) {
        cin >> v[i];
    }

    int m;
    cin >> m;
    vector<int> v2(m);
    for (i = 0; i < m; i++) {
        cin >> v2[i];
    }

    vector<int> ans = merge(v, v2);

    for (auto val : ans) {
        cout << val << " ";
    }

    return 0;
}

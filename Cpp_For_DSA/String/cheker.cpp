#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int flag = 0;

    for(int i = 0; i < s.size() - 1; i++) {
        if(s[i] <= s[i+1]) {
            flag = 1; 
            break;
        }
    }

    if(flag == 0) cout << "Yes" << endl; 
    else cout << "No" << endl;

    return 0;
}

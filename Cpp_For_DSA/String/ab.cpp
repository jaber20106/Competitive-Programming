#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int flag = 0;

    for (int i = 0; i < n - 1; i++) {
        if ((s[i] == 'a' && s[i + 1] == 'b') || (s[i] == 'b' && s[i + 1] == 'a')) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
}

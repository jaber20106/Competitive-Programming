#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.size() - 1; i++) cout << s[i] << ' ';
	cout << s.back() << endl;
}
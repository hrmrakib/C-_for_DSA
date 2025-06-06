#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    string s;
    // cin >> s; // without space
    // cin.getline(s, 100); // It's for char[]
    cin.ignore();
    getline(cin, s);
    cout << s << endl;

    return 0;
}
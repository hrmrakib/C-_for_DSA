#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[5] = {1,2,3,4,5};
    reverse(a, a + 5);

    for(int i = 0; i < 5; i++) {
        cout << a[i] << endl;
    }

    string s = "hello";
    
    reverse(s.begin(), s.end());

    for(char c : s) {
        cout << c << endl;
    }

    return 0;
}
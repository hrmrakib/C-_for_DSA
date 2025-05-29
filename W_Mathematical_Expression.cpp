#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    char s, q;

    cin >> a >> s >> b >> q >> c;

    if(s == '+') {
        (a + b) == c ? cout << "Yes\n" : cout << (a + b) << endl; 
    }
    cout << a << s << b << q << c;
    return 0;
}
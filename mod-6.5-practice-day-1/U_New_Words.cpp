#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int e = 0, g = 0, y = 0, p = 0, t = 0;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'e' || s[i] == 'E') {
            e++;
        }
        if(s[i] == 'g' || s[i] == 'G') {
            g++;
        }
        if(s[i] == 'y' || s[i] == 'Y') {
            y++;
        }
        if(s[i] == 'p' || s[i] == 'P') {
            p++;
        }
        if(s[i] == 't' || s[i] == 'T') {
            t++;
        }
    }

    int min_value = min({e, g, y, p, t});
    cout << min_value << endl;
    return 0;
}
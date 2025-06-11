#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    
    for(int i = 0; i < tc; i++) {
        string s, t;
        cin >> s >> t;
        string result;
        int len = max(s.size(), t.size());

        for(int i = 0; i < len; i++){
            if(i < s.size()){
                result += s[i];
            }
            if(i < t.size()){
                result += t[i];
            }
        }
        cout << result << endl;
    }

    return 0;
}
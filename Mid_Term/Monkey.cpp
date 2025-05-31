#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    while (getline(cin, s))
    {
        string text;
        for(char c: s) {
            if(c != ' ' && c != '\r'){
                text+=c;
            }
        }

        sort(text.begin(), text.end());
        cout << text << endl;

    }

    return 0;
}
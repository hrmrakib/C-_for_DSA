#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "I love programming";

    stringstream ss(s);
    string word;
    ss >> word;
    reverse(word.begin(), word.end());
    cout << word;

    while(ss >> word) {
        reverse(word.begin(), word.end());
        cout << " " << word;
    } 

    return 0;
}
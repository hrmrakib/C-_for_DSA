#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello I am Rakib";

    stringstream ss(s);
    string word;

    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;

    while (ss >> word) {
        cout << word << endl;
    }

    return 0;
}
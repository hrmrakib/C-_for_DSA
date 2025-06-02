#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello ";
    string s2 = "World";
    string s3 = "Hello World";

    // s += s2;
    // s.append(s2);
    // s.push_back('Z');
    // s.pop_back();
    // s.pop_back();

    // s = s2;
    // s.assign("New value assign");
    // s.erase(2);
    // s.erase(2,1);
    s3.replace(6, 5, "Bangladesh");
    s.insert(6, "Programmer");

    cout << s << endl;
    // cout << s3 << endl;

    return 0;
}
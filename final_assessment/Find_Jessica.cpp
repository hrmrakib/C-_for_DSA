#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string each;

    bool ok = false;
    while (ss >> each)
    {
        if (each == "Jessica")
        {
            ok = true;
            break;
        }
    }

    if (ok)
    {
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
}
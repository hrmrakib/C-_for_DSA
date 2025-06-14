#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    cin.ignore();

    for (int i = 0; i < tc; i++)
    {
        string s, x;
        cin >> s >> x;

        size_t pos = 0;
        while ((pos = s.find(x, pos)) != string::npos)
        {
            s.replace(pos, x.length(), "#");
            pos += 1;
        }
        cout << s << endl;
    }

    return 0;
}
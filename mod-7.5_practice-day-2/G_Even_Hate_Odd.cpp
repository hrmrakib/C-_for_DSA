#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        int a[n];
        int even = 0;
        int div = n / 2;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] % 2 == 0)
            {
                even++;
            }
        }

        if (n % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            int half = n / 2;
            cout << abs(even - half) << endl;
        }
    }
    return 0;
}
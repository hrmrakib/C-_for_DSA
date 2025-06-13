#include <bits/stdc++.h>
using namespace std;

int main()
{
    

    string text = "ITALYKOREAEGYPTEGYPTALGERIAEGYPTZ";

    for (int i = 0; i < text.size(); i++)
    {
        int ok = text.find("EGYPT");
        string newTxt = text.replace(ok, 5, " ");
        cout << newTxt << endl;
    }

    return 0;
}
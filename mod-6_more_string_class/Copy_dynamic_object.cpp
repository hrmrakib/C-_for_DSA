#include <bits/stdc++.h>
using namespace std;

class Cricketer{
    public:
        string country;
        int jersey;

    Cricketer(string country, int jersey) {
        this->country = country;
        this->jersey = jersey;
    }
};

int main() {
    Cricketer * dhoni = new Cricketer("India", 17);
    Cricketer * kohli = new Cricketer("India", 29);

    // 1 way but not fancy   ------->
    // dhoni->jersey = kohli->jersey;
    // dhoni->country = kohli->country;

    // 2:
    *kohli = *dhoni;

    cout << dhoni->jersey << endl;
    cout << kohli->jersey << endl;

    return 0;
}

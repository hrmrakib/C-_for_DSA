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

    dhoni->jersey = kohli->jersey;
    dhoni->country = kohli->country;

    cout << "1. " <<dhoni->jersey << endl;
    cout << "2. " << kohli->jersey << endl;

    return 0;
}

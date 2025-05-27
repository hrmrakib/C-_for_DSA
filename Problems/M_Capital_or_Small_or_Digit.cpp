#include <iostream>
using namespace std;

int main() {
    
    char x;
    cin >> x;
    int ascii = x;

    if(ascii >= 48 && ascii <= 57) {
        cout << "IS DIGIT";
    }
    else if(ascii >= 65 && ascii <= 90) {
        cout << "ALPHA\nIS CAPITAL";
    }
    else if(ascii >= 97 && ascii <= 122) {
        cout << "ALPHA\nIS SMALL";
    }

    return 0;
}
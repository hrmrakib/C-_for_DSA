#include <iostream>
using namespace std;

int main() {
    int a, b;
    char sign;
    cin >> a >> sign >> b;

    if(sign == '=') {
        a == b ? cout << "Right" : cout << "Wrong";
    }
    else if(sign == '<') {
        a < b ? cout << "Right" : cout << "Wrong";
    }
    else if(sign == '>') {
        a > b ? cout << "Right" : cout << "Wrong";
    }
    
    return 0;
}
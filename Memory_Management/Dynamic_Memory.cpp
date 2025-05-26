#include <iostream>
using namespace std;
 
int main() {
    
    int *p = new int;

    *p = 102;

    cout << *p << endl;
    return 0;
}
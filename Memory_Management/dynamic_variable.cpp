#include <iostream>
using namespace std;
 
int *p;

void func() {
    int *x = new int;
    *x = 110;
    p = x;
    cout << "func -> " << *p << endl;
    return;
}
int main() {
    func();
    cout << "func -> " << *p << endl;
    return 0;
}
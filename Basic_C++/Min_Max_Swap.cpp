#include <iostream>
#include<algorithm>
using namespace std;
 
int main() {
    
    int a = 100, b = 23;

    cout << min(a, b) << endl;

    cout << max(a, b) << endl;

    cout << min({7, 23, 328, 436, 987, 24, 47, 87, 340}) << endl;

    swap(a, b);

    cout << a << " " << b << endl;
 
    return 0;
}
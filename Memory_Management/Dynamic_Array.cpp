#include <iostream>
using namespace std;
 
int main() {
    int * a = new int[5];

    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    return 0;
}
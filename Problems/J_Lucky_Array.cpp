#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int m = a[0];
    for(int i = 0; i < n; i++) {
        m = min(m, a[i]);
    }

    int count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == m) {
            count++;
        }
    }

    if(count % 2 != 0) {
        cout << "Lucky" << endl;
    }else{
        cout << "Unlucky" << endl;
    }

    return 0;
}
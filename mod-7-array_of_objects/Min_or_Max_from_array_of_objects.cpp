#include <bits/stdc++.h>
using namespace std;

class Student {
    public: 
        string name;
        int roll;
        int marks;
};

int main() {
    int n;
    cin >> n;

    Student a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    int min_mark = INT_MAX;
    for(int i = 0; i < n; i++) {
        min_mark = min(a[i].marks, min_mark);
    }
    cout << min_mark << endl;
    return 0;
}
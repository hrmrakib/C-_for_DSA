#include <bits/stdc++.h>
using namespace std;

class Student {
    public: 
        string nm;
        int cls;
        char sec;
        int id;
        int math_marks;
        int eng_marks;

        int total_marks () {
            return this->math_marks + this->eng_marks;
        }
};

bool compare(Student l, Student r) {
    if(l.total_marks() == r.total_marks()){
        return l.id < r.id;
    }else{
        return l.total_marks() > r.total_marks();
    }
};

int main() {
    int n;
    cin >> n;

    Student a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i].nm >> a[i].cls >> a[i].sec >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }

    sort(a, a + n, compare);

    for(int i = 0; i < n; i++) {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }
    
    return 0;
}
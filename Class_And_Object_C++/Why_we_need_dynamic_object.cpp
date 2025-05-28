#include <iostream>
using namespace std;

class Student {
    public: 
        int roll;
        int cls;
        double gpa;

    Student(int r, int c, double g) {
        this->roll = r;
        this->cls = c;
        this->gpa = g;
    }
};

Student* func() {
    Student rakib(10, 12, 4.82);
    Student *p = &rakib;

    return p;
};


// here is -> why need, not solutions

int main() {

    Student *p = func();

    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
    
    return 0;
}
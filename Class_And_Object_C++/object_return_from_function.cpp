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

Student func() {
    Student rakib(10, 12, 4.82);
    return rakib;
};

int main() {

    Student obj = func();

    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    
    return 0;
}
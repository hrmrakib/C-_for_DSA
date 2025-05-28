#include <iostream>
using namespace std;

class Student {
    public: 
        int roll;
        int cls;
        double gpa;

    Student(int roll, int cls, double gpa) {
        // this->roll = roll;
        // this->cls = cls;
        // this->gpa = gpa;

        (*this).roll = roll;
        (*this).cls = cls;
        (*this).gpa = gpa;
    }
}

int main() {

    Student rakib(10, 12, 4.82);

    cout << rakib.roll << " " << rakib.cls << " " << rakib.gpa << endl;
    
    return 0;
}
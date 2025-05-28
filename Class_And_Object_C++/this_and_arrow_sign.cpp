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
    
    return 0;
}
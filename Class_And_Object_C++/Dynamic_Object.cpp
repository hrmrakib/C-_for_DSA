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

int main() {
    
    Student rahim(23, 8, 3.89);

    Student * karim = new Student(12, 8, 4.49);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;

    return 0;
}
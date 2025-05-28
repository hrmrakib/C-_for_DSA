#include <iostream>
using namespace std;

class Student {
    public:
        int roll;
        int cls;
        double gpa;

    Student (int r, int c, double g) {
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main() {

    Student rakib(10, 12, 4.91);

    Student sakib(13, 12, 4.41);
    
    return 0;
}
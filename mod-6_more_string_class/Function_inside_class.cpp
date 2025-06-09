#include <bits/stdc++.h>
using namespace std;

class Student{
    public: 
        string name;
        int roll;  
    
    Student(string name, int roll) {
        this->name = name;
        this->roll = roll;
    }

    void hello() {
        cout << "Hello ......." << endl;
    }
};

int main() {

    Student rakib("Rakib Hasan", 11);

    cout << rakib.name << endl;

    rakib.hello();
    
    return 0;
}
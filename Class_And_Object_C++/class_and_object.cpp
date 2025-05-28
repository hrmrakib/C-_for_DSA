#include <iostream>
using namespace std;

class Student
{
public:
    char name[101];
    int roll;
    double gap;   
};

int main() {

    Student a, b;

    cin.getline(a.name, 101);
    cin >> a.roll >> a.gap; 

    cin.ignore();

    cin.getline(b.name, 101);
    cin >> b.roll >> b.gap;

    cout << a.name << " " << a.roll << " " << a.gap << endl;
    cout << b.name << " " << b.roll << " " << b.gap << endl;
    
    return 0;
}
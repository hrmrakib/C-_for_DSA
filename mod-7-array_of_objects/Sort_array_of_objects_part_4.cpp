#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};
 
bool comp (Student l, Student r) {
    // 1:
    // if(l.marks < r.marks){
    //     return true;
    // }
    // else if(l.marks > r.marks){
    //     return false;
    // }else{
    //     if(l.roll < r.roll) {
    //         return true;
    //     }else{
    //         return false;
    //     }
    // }

    // 2:
    // if(l.marks == r.marks){
    //     return l.roll < r.roll;
    // }else{
    //     return l.marks > r.marks;
    // }

    // 3: 
    return (l.marks == r.marks) ? l.roll < r.roll : l.marks > r.marks;
    
}

int main()
{
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    // 1: Sort the array of objects based on marks
    // sort(a, a + n, [](const Student &s1, const Student &s2) {
    //     return s1.marks < s2.marks;
    // });

    // 2:
    sort(a, a + n, comp);

    // Print the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}

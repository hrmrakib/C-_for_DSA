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
    if(l.marks < r.marks){
        return true;
    }else{
        return false;
    }
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

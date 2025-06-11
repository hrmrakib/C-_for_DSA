#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    // Find the minimum marks from the array of objects
    // int min_mark = INT_MAX;
    // for(int i = 0; i < n; i++) {
    //     min_mark = min(a[i].marks, min_mark);
    // }
    // cout << min_mark << endl;
    
    // Find the student with minimum marks
    Student mn;
    mn.marks = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i].marks < mn.marks)
        {
            mn = a[i];
        }
    }
    cout << mn.name << " " << mn.roll << " " << mn.marks << endl;
    return 0;
}
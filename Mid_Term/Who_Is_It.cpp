#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    string name;
    char section;
    int totalMarks;
};

int main() {
    int tc;
    cin >> tc;

    for (int i = 0; i < tc; i++) {
        Student s1, s2, s3;

        cin >> s1.id >> s1.name >> s1.section >> s1.totalMarks;
        cin >> s2.id >> s2.name >> s2.section >> s2.totalMarks;
        cin >> s3.id >> s3.name >> s3.section >> s3.totalMarks;

        Student best = s1;

        if (s2.totalMarks > best.totalMarks ||
           (s2.totalMarks == best.totalMarks && s2.id < best.id)) {
            best = s2;
        }

        if (s3.totalMarks > best.totalMarks ||
           (s3.totalMarks == best.totalMarks && s3.id < best.id)) {
            best = s3;
        }

        cout << best.id << " " << best.name << " " << best.section << " " << best.totalMarks << endl;
    }

    return 0;
}

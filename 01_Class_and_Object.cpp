#include <bits/stdc++.h>
using namespace std;


class Student{

public:
    string name;
    int age;
    double gpa;

};

int main() {
    Student s1;
    s1.name = "Alice";
    s1.age = 20;
    s1.gpa = 3.8;

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "GPA: " << s1.gpa << endl;

    
return 0;
}

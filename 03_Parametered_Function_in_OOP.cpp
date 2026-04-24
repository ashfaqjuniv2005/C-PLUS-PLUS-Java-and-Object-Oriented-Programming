#include <bits/stdc++.h>
using namespace std;


class Student{

public:
    string name;
    int age;
    double gpa;
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << gpa << endl;
    }

    void setInfo(string n, int a, double g) {
        name = n;
        age = a;
        gpa = g;
    }

};

int main() {
    Student s1;
    s1.setInfo("Bob and oggy", 20, 3.87);
    s1.displayInfo();
return 0;
}

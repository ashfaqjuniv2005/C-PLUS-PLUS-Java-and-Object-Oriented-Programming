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

  

};

int main() {
    Student s1;
    s1.name = "Alice";
    s1.age = 20;
    s1.gpa = 3.8;
    
    s1.displayInfo();
return 0;
}

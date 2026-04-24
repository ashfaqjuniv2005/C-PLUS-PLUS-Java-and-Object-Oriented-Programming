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

  Student(string x,int y,double z){
    name =x;
    age = y;
    gpa = z;
  }

};

int main() {
    Student s1("Alice", 20, 3.8);
    s1.displayInfo();
return 0;
}

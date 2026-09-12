/*

Create a Student class.

Attributes:

name
id
department
cgpa

Functions:

displayInfo()

Create 3 Student objects and display their information.

Practice:
Class, object, data members, member functions.


*/


#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int id;
    string dept;
    float cgpa;
    
    
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Department: " << dept << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};



int main() {
	
  	Student s1;
  	s1.name = "Joy";
  	s1.id = 101;
    s1.dept = "CSE";
    s1.cgpa = 3.85;
    
    s1.displayInfo();
	

}


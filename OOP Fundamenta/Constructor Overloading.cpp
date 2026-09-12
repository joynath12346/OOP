/*

Constructor Overloading

*/


#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int id;
    string dept;
    float cgpa;
    
    Student() = default;
    
    Student(string name, int id){
        this->name = name;
        this->id = id;
    }
    Student(string name, int id, string dept, float cgpa){
        this->name = name;
        this->id = id;
        this->dept = dept;
        this->cgpa = cgpa;
    }
    
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Department: " << dept << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};



int main() {
	  Student s1;
    Student s2("Joy", 101);
    Student s3("Joy", 101, "CSE", 3.85);
    
    s1.displayInfo();
  	s2.displayInfo();
  	s3.displayInfo();
  	

}

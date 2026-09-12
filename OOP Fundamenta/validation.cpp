/*

Add validation so:

ID > 0
0 <= CGPA <= 4
name is not empty

*/


#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    string name = "Unknown";
    int id = -1;
    string dept = "Unknown";
    float cgpa = -1;

public:

    Student() = default;
   
    Student(string name, int id){
        if (name != "") this->name = name;
        if (id > 0)     this->id = id;
    }
    Student(string name, int id, string dept, float cgpa){
        if (name != "")             this->name = name;
        if (id > 0)                 this->id = id;
                                    this->dept = dept;
        if(0 <= cgpa && cgpa <= 4)  this->cgpa = cgpa;
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

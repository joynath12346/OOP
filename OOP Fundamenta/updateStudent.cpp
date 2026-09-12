/*

Make the Student class properly encapsulated.

Your name, id, dept, and cgpa must remain private.

Add getter and setter functions for all four.

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

    void setName(string name) {
        if (name != "") this->name = name;
    }
    void setId(int id) {
        if (id > 0)     this->id = id;
    }
    void setDept(string dept) {
        this->dept = dept;
    }
    void setCgpa(float cgpa) {
        if(0 <= cgpa && cgpa <= 4)  this->cgpa = cgpa;
    }
    
    string getName() {
        return name;
    }
    int getId() {
        return id;
    }
    string getDept() {
        return dept;
    }
    float getCgpa() {
        return cgpa;
    }
    
    void updateStudent(string name , int id , string dept , float cgpa) {
        setName(name);
        setId(id);
        setDept(dept);
        setCgpa(cgpa);
    }
    

    Student() = default;
   
    Student(string name, int id){
        setName(name);
        setId(id);
    }
    Student(string name, int id, string dept, float cgpa){
        setName(name);
        setId(id);
        setDept(dept);
        setCgpa(cgpa);
    }
    

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Department: " << dept << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};



int main() {
	Student s1("Joy", 101, "CSE", 3.85);

    
    s1.updateStudent("", -10, "", 5.5);
    
    s1.displayInfo();
	

}

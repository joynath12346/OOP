/*



*/


#include <bits/stdc++.h>
using namespace std;

class Person {
    string name;
    int id;
    
public:
    void setName(string name) {
        this->name = name;
    }
    void setId(int id) {
        this->id = id;
    }
    string getName() {
        return name;
    }
    int getId() {
        return id;
    }
    
};


class Student: public Person {
    string dept = "Unknown";
    float cgpa = -1;
    
public:

    void setDept(string dept) {
        this->dept = dept;
    }
    void setCgpa(float cgpa) {
        if(0 <= cgpa && cgpa <= 4)  this->cgpa = cgpa;
    }
    
    string getDept() {
        return dept;
    }
    float getCgpa() {
        return cgpa;
    }
    void displayInfo() {
        cout << "Name: " << getName() << endl; // this the main magic here
        cout << "ID: " << getId() << endl;
        cout << "Department: " << getDept() << endl;
        cout << "CGPA: " << getCgpa() << endl;
    }
};



int main() {

    Student s1;

    s1.setName("Joy");
    s1.setId(101);
    s1.setDept("CSE");
    s1.setCgpa(3.85);

    s1.displayInfo();
}

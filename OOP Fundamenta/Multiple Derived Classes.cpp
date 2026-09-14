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
    Person(string name , int id) : name(name) , id(id) {
        
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
    
    Student(string name , int id , string dept , float cgpa) : Person(name , id) , dept(dept) , cgpa(cgpa) {
        
    }
    
    
    void displayInfo() {
        cout << "Name: " << getName() << endl; // this the main magic here
        cout << "ID: " << getId() << endl;
        cout << "Department: " << getDept() << endl;
        cout << "CGPA: " << getCgpa() << endl;
    }
};

class Teacher :public Person {
    string dept;
    double salary;
public:

    string getDept() {
        return dept;
    }
    double getSalary() {
        return salary;
    }
    
    void setDept(string dept) {
        this->dept = dept;
    }
    void setSalary(double salary) {
        this->salary = salary;
    }
    Teacher(string name, int id , string dept , double salary) : Person(name , id) , dept(dept) , salary(salary) {
        
    }
    void displayInfo() {
        cout << "Name: " << getName() << endl; // this the main magic here
        cout << "ID: " << getId() << endl;
        cout << "Department: " << getDept() << endl;
        cout << "Salary: " << getSalary() << endl;
    }
};

int main() {
    Student s1("Joy", 101, "CSE", 3.85);
    Teacher t1("Rahim", 201, "CSE", 50000);

    s1.displayInfo();
    cout << endl;
    t1.displayInfo();
}

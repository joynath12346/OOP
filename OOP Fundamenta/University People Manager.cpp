/*

Problem 16 — University People Manager
Goal

Create a UniversityManager class that can store both:

Student
Teacher

in the same collection using polymorphism.

Requirement

You already have:

class Person
class Student : public Person
class Teacher : public Person

Now create:

class UniversityManager

It should have:

vector<Person*> people;
Functions to implement
void addPerson(Person* person);
void displayAllPeople();
addPerson()

It should add a Person* to the vector.


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
    virtual void displayInfo() {
        cout << "Name: " << getName() << endl; 
        cout << "ID: " << getId() << endl;
        
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
    
    
    void displayInfo() override {
        cout << "Name: " << getName() << endl; 
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
    void displayInfo() override {
        cout << "Name: " << getName() << endl; 
        cout << "ID: " << getId() << endl;
        cout << "Department: " << getDept() << endl;
        cout << "Salary: " << getSalary() << endl;
    }
};

class UniversityManager {
    std::vector<Person* > Persons;
    
public:
    void addPerson(Person* p) {
        Persons.push_back(p);
    }
    void displayPersons() {
        for (auto u : Persons) {
            u->displayInfo();
            cout << "\n";
        }
    }
};


int main() {
    Student s1("Joy", 101, "CSE", 3.85);
    Teacher t1("Rahim", 201, "CSE", 50000);

    UniversityManager manager;
    
    manager.addPerson(&s1);
    manager.addPerson(&t1);
    
    manager.displayPersons();
}

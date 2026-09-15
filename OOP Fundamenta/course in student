/*


build course class;

*/


#include <bits/stdc++.h>
using namespace std;


class Course {
    string courseCode;
    string courseName;
    int credit;  
public:
    
    string getCourseCode() {
        return courseCode;
    }
    
    string getCourseName() {
        return courseName;
    }
    
    int getCredit() {
        return credit;
    }
    
    
    void setCourseCode(string courseCode) {
        this->courseCode = courseCode;
    }
    void setCourseName(string courseName) {
        this->courseName = courseName;
    }
    void setCredit (int credit) {
        if (credit > 0) {
            this->credit = credit;
        }
    }
    

    Course(string courseCode, string courseName, int credit)
        : courseName(courseName) , courseCode(courseCode) , credit(3) {
            setCredit(credit);
        }
    
    void displayCourse() {
        cout << "Course Code: " << getCourseCode() << endl;
        cout << "Course Name: " << getCourseName() << endl;
        cout << "Credit: " << getCredit() << endl;
    }
};


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
    virtual void displayInfo() = 0;
};


class Student: public Person {
    string dept = "Unknown";
    float cgpa = -1;
    vector<Course> courses;
    
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
        cout << "Name: " << getName() << endl; // this the main magic here
        cout << "ID: " << getId() << endl;
        cout << "Department: " << getDept() << endl;
        cout << "CGPA: " << getCgpa() << endl;
    }
    
    
    void enrollCourse(const Course& course) {
        courses.push_back(course);
    }
    void displayCourses() {
        for (auto u : courses) {
            u.displayCourse();
        }
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
        cout << "Name: " << getName() << endl; // this the main magic here
        cout << "ID: " << getId() << endl;
        cout << "Department: " << getDept() << endl;
        cout << "Salary: " << getSalary() << endl;
    }
};

int main() {
    Student s1("Joy", 101, "CSE", 3.85);

    Course c1("CSE101", "OOP", 3);
    Course c2("CSE102", "DBMS", 3);
    
    s1.enrollCourse(c1);
    s1.enrollCourse(c2);
    
    s1.displayCourses();
}

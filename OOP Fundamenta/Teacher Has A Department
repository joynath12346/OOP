/*

implement Department

Department
Course

Person
├── Student
│   ├── Department
│   └── Courses
│
└── Teacher
    ├── Department
    └── Courses



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

class Department {
    string departmentCode;
    string departmentName;

public:

    void setDepartmentCode(string departmentCode) {
        this->departmentCode = departmentCode;
    }

    void setDepartmentName(string departmentName) {
        this->departmentName = departmentName;
    }

    string getDepartmentCode() {
        return departmentCode;
    }

    string getDepartmentName() {
        return departmentName;
    }

    Department(string departmentCode, string departmentName)
        : departmentCode(departmentCode), departmentName(departmentName) {
    }

    void displayDepartment() {
        cout << "Department Code: " << getDepartmentCode() << endl;
        cout << "Department Name: " << getDepartmentName() << endl;
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
    //string dept = "Unknown";
    Department dept;
    float cgpa = -1;
    vector<Course> courses;
    
public:

    void setDept(Department dept) {
        this->dept = dept;
    }
    void setCgpa(float cgpa) {
        if(0 <= cgpa && cgpa <= 4)  this->cgpa = cgpa;
    }
    
    Department getDept() {
        return dept;
    }
    float getCgpa() {
        return cgpa;
    }
    
    Student(string name , int id , Department dept , float cgpa) : Person(name , id) , dept(dept) , cgpa(cgpa) {
        
    }
    
    
    void displayInfo() override {
        cout << "Name: " << getName() << endl; 
        cout << "ID: " << getId() << endl;
        getDept().displayDepartment();
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
    Department dept;
    double salary;
    vector<Course> courses;
public:

    Department getDept() {
        return dept;
    }
    double getSalary() {
        return salary;
    }
    
    void setDept(Department dept) {
        this->dept = dept;
    }
    void setSalary(double salary) {
        this->salary = salary;
    }
    Teacher(string name, int id , Department dept , double salary) : Person(name , id) , dept(dept) , salary(salary) {
        
    }
    void displayInfo() override {
        cout << "Name: " << getName() << endl; // this the main magic here
        cout << "ID: " << getId() << endl;
        getDept().displayDepartment();
        cout << "Salary: " << getSalary() << endl;
    }
    void displayCourses() {
        for (auto u : courses) {
            u.displayCourse();
        }
    }
    void assignCourse(const Course& course) {
        courses.push_back(course);
    }
};

int main() {
    Department d1("CSE", "Computer Science and Engineering");

    Teacher t1("Rahim", 201, d1, 50000);
    
    t1.displayInfo();
}

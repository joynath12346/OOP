/*

Searching objects in a vector + member function returning an object/reference

Your manager currently can:

StudentManager
    ↓
vector<Student>
    ↓
addStudent()
displayAllStudents()

Now add:

findStudentById(int id)
Task

Search the vector using the student's id.

For example:

Student* findStudentById(int id)

If the student exists, return that student.

If it doesn't exist, return nullptr.

*/


#include <bits/stdc++.h>
using namespace std;



class Student {
private:
    string name = "Unknown";
    int id = -1;
    string dept = "Unknown";
    float cgpa = -1;
    inline static int  studentCount;
    
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
    

    Student() {
        studentCount++;
    }
   
    Student(string name, int id){
        setName(name);
        setId(id);
        studentCount++;
    }
    Student(string name, int id, string dept, float cgpa){
        setName(name);
        setId(id);
        setDept(dept);
        setCgpa(cgpa);
        studentCount++;
    }
    
     static int getStudentCount() {
        return studentCount;
    }
    

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Department: " << dept << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};


//Composition

class StudentManager {
private:
    std::vector<Student> students;
    
public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }
    
    void displayAllStudents() {
        for(auto u : students) {
            u.displayInfo();
        }
    }
    
    Student* findStudentById(int id) {
        for (auto& u : students) {
            if (u.getId() == id) {
                return &u;
            }
        }
        return NULL;
    }
};




int main() {

    StudentManager manager;

    Student s1("Joy", 101, "CSE", 3.85);
    Student s2("Rahim", 102, "CSE", 3.50);
    Student s3("Karim", 103, "EEE", 3.70);

    manager.addStudent(s1);
    manager.addStudent(s2);
    manager.addStudent(s3);

    Student* student = manager.findStudentById(102);
    
    if (student != nullptr) {
        student->displayInfo();
    }
    else {
        cout << "student not found\n";
    }
    
}

/*

Update student data by ID

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
    void removeStudent(int id) {
        for (auto it = students.begin(); it != students.end(); it++) {
            if (it->getId() == id) {
                students.erase(it);
                return;
            }
        }
        cout << "Student not found\n";
        
    }
    void updateStudent(int id, string name, string dept, float cgpa) {
        Student* student = findStudentById(id);
        
        if (student != nullptr) {
            student->setName(name);
            student->setDept(dept);
            student->setCgpa(cgpa);
        }
        else {
            cout << "Student not found\n";
        }
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

    manager.displayAllStudents();
    cout << "\n\n\n\n";
    manager.updateStudent(102, "Rahim Ahmed", "CSE", 3.80);
    manager.displayAllStudents();
}

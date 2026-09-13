/*

add conter 

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



int main() {

    cout << Student::getStudentCount() << endl;

    Student s1;
    Student s2("Joy", 101);
    Student s3("Rahim", 102, "CSE", 3.85);

    cout << Student::getStudentCount() << endl;

}

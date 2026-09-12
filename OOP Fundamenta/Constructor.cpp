/*

Student constructor 

*/


#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int id;
    string dept;
    float cgpa;
    
    Student(string a, int b , string c , float d) {
        name = a;
        id  = b;
        dept = c;
        cgpa = d;
    }
    
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Department: " << dept << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};



int main() {
	
  	Student s1 ("Joy" , 101 , "CSE" , 3.85);
    
    s1.displayInfo();
	

}

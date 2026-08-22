//class is nothing but a user defined datatype where we can store values of differn datatype under same variable name

#include<iostream>
using namespace std;
class Student{     // student is a user defined data type.
public:  
    string name;
    int rollno;
    float cgpa;
};
int main(){
    Student s1;   // s1 is also called as object.
    s1.name = "krishna";
    s1.rollno = 24;
    s1.cgpa = 8.2;

    Student s2;
    s2.name = "raghav";
    s2.rollno = 25;
    s2.cgpa = 8.2;

    cout<<s1.name<<endl;
    cout<<s2.name<<endl;
}



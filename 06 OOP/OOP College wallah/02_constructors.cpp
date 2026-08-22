#include<iostream>
using namespace std;
class Student{     
public:  
    string name;
    int rollno;
    float cgpa;

    // constructor
    Student(string s,int r,float c){  // constructor name will be same as class name
        name = s;
        rollno = r;
        cgpa = c;
    }
};        
int main(){       //mandatory to pass the parameters,if created a constructor
// jese hi object create karte hai humko tabhi parameters bhi send karne padte hai
// agar constructor parameters puch rha hai tabhi warna nahi

    Student s1("krishna",24,9.6); 
    Student s2("raghav",25,9.5);
    s1.cgpa = 9.5;
    cout<<s1.name<<" "<<s1.rollno<<" "<<s1.cgpa<<endl;
    cout<<s2.name<<" "<<s2.rollno<<" "<<s2.cgpa<<endl;

    Student s3 = s1;  // copy the details
    cout<<s3.name<<" "<<s3.rollno<<" "<<s3.cgpa<<endl;

}
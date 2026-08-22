#include<iostream>
using namespace std;
class Student{
    // properties of a class(data members)
    private:
        string name;          // this is an example of data encapsulation
        int age;              // as the properties(data members) and the methods(functions)
        int height;           // are wrapped in a single class.

    //methods (functions) 
    public:
    void fun(){
        cout<<"Name is"<<this->name;
    }   
};

int main(){
    Student obj1;
}
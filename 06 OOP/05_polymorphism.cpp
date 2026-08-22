#include<iostream>
using namespace std;
class A{

    public:
    // this is an example of function overloading
    void greet(){       
        cout<<"Hello krishna indoria"<<endl;
    }
// both the functions have same name, but perform different task.
    void greet(string name){    //to use same function name we must add a parameter
        cout<<"Hello "<<name<<endl;
    }

};
int main(){
    A obj;
    obj.greet();

}
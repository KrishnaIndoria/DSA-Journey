// once refer my python book c.w in tht oops is written briefly

#include<iostream>
using namespace std;
class Hero {
    public:
    string Name;
    Hero() {  // this is a constructor
        cout<<"This is default constructor"<<endl;
    }

    // parametirized constructor
    Hero(string name){
        this-> Name = name; // this is just like self in python.
        // this->,  refers to current object.
    }

    void print(){
        cout<<"Name of the hero is "<<this->Name<<endl;
    }
};

int main(){
    Hero obj1("steve"); //as soon as object is created,default constructor is invoked(created)
    Hero obj2("tony"); // 2nd object 
}


// destructor
// ~Hero(){
//     cout<<"this is destructor"<<endl;
// }

// read all the keywords such as static keyword and all
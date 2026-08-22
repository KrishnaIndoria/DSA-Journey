// learn types of inheritance from python c.w
#include<iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getfun1(){
        return this->height;
    }

    void setfun2(int w){
        this->weight = w;
    }
};
class Male:public Human{  //inheritance (in public mode)
    public:               // by public mode, all the properties in male class will be public
    string colour;

    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }
};
int main(){
    Male obj1;
    cout<<obj1.age<<endl;
    cout<<obj1.weight<<endl;
    cout<<obj1.height<<endl;
    cout<<obj1.colour<<endl;
    obj1.sleep();
    obj1.setfun2(85);
    cout<<obj1.weight<<endl;
    obj1.height = 6;
    cout<<obj1.height<<endl;
}

// inheritance se humko human class ki properties ko wapas male class mai likhne ki jarurat
// nahi padi, automatically human class ki properties male class mai aagayi by inheritance.

// private properties cannot be inherited from base class to child class
// protected properties can be accesed by only child class but cannot be accessed outside a class.
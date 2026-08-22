#include<iostream>
using namespace std;
class Hero {

    // properties of class
    public:
    int health; // health can be accessed both inside and outside class(public)

    private:
    char level;  //level can be accessed only inside class(private)

};

int main(){
    // creation of object
    Hero steve;    // steve is a object 

    steve.health = 85;   // accessing 
    // cout<<steve.health<<endl;

}
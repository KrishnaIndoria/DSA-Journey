#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;

    Cricketer(string name,int runs){  // constructor
        this->name = name;      
        this->runs = runs;
    }
    // this-> refers to the particular object's details(just like self in python)
};

int main(){
    Cricketer c1("virat",25000);
    // Cricketer c2("dhoni",18000);

    Cricketer*ptr = new Cricketer("dhoni",18000); // dynamic way
    // ptr ek cricketer data type ka pointer hai, jisme hamare ek object ka address stored hai
    // but hame uss object ka naam nahi pata hai jese c1,c2 esse woh humko pata nahi hai
    // new se ek naya object ban rha hai, par humko uska naam nahi pata hai bas.

    // printing details
    // cout<<(*ptr).name<<" "<<(*ptr).runs<<endl; 
    cout<<ptr->name<<" "<<ptr->runs<<endl; 

}
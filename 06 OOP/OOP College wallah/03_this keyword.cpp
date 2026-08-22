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
    Cricketer c2("dhoni",18000);

    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2.name<<" "<<c2.runs<<endl;
}
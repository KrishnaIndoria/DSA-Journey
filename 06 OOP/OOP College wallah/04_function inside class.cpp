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

    void print(){    // function inside a class (this is also called as method)
        cout<<this->name<<" "<<this->runs<<endl;
    }
   
};

int main(){
    Cricketer c1("virat",25000);
    Cricketer c2("dhoni",18000);

    c1.print();
    c2.print();
}
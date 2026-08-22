// important topic as it will be used in linked list.
#include<iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;

    Cricketer(string name,int runs){  
        this->name = name;      
        this->runs = runs;
    }  
};

int main(){
    Cricketer c1("virat",25000);
    Cricketer c2("dhoni",18000);
    
    Cricketer* p1 = &c1;
     //p1 is a pointer(of Cricketer data type),storing the address of object c1
    
    cout<<(*p1).name<<endl; //accessing values through pointers (ex:c1.name)
    // cout<<(*p1).name<<endl;  (or) cout<<p1->runs<<endl; both r same

    // (*p1).runs = 27000; //modifying values using pointers
    p1->runs = 27000; // both are same (*p1).runs = 27000;
    cout<<c1.runs<<endl;
}
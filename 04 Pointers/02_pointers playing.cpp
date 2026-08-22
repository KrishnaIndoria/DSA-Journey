#include<iostream>
using namespace std;
int main(){
    int num = 5;
    int *p = &num;
    cout<<"before "<<num<<endl;
    (*p)++;   // updating the value 
    cout<<"after "<<num<<endl;

    int *q = p; // copying a pointer into a other pointer
    cout<<p<<" "<<q<<endl;
    cout<<*p<<" "<<*q<<endl;
    
}
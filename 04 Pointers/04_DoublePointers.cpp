#include<iostream>
using namespace std;
int main(){
    int i = 5;
    int *p = &i;
    int **p2 = &p;  // address of p(pointer) is stored in another pointer p2.

    cout<<"address of i "<<p<<endl;
    cout<<"address of p "<<p2<<endl;

    cout<<"value of i "<<*p<<endl;
    cout<<"value of p "<<*p2<<endl;

}
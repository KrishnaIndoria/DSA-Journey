#include<iostream>
using namespace std;
int main(){
    int num = 5;
    cout<<"Adress of num is "<<&num<<endl;

    int *ptr = &num; // pointer declaration , here 'ptr' is a pointer.
    cout<<"value of num is : "<<*ptr<<endl; // accesing value of num variable
    cout<<"adress is : "<<ptr<<endl;
}
#include<iostream>
using namespace std;
void print(int *p){
    cout<<p<<endl;
    cout<<*p<<endl;
    
}
int main(){
    // int arr[3] = {2,3,5};
    // cout<<"Address of first element: "<<&arr[0]<<endl;
    // cout<<"Value of first block of array: "<<*arr<<endl;
    // cout<<"Value of second block of array: "<<*arr+1<<endl;

    int value = 5;
    int *p = &value;
    print(p);
  
}
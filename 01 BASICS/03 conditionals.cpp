#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Value of a is : "<<a<<endl;

    if(a>0){
        cout<<"a is +ve"<<endl;
    }

    else if(a==0){
        cout<<"a is zero"<<endl;
    }

    else{
        cout<<"a is -ve"<<endl;
    }
}
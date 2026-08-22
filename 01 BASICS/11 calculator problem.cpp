#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a : "<<endl;
    cin>>a;
    cout<<"Enter b : "<<endl;
    cin>>b;

    char op;
    cout<<"Enter the operation to be performed : "<<endl;
    cin>>op;
    

    switch(op){
        case '+': cout<< a+b <<endl;
                  break;

        case '-': cout<< a-b <<endl;
                  break;

        case '*': cout<< a*b <<endl;
                  break;

        case '/': cout<< a/b <<endl;
                 break;

        case '%': cout<< a%b <<endl;
                   break;

        default : cout<<"Please enter valid operation"<<endl;
    }
}
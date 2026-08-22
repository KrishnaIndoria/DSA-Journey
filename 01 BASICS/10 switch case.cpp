// The if-else-if ladder can be ignored by using switch case.
// switch case can be used instead of conditionals(if-else-if) to make it easier.

#include<iostream>
using namespace std;
int main(){
    int num = 2;

    switch (num){
    case 1: cout<<"First"<<endl;
            break;

    case 2: cout<<"Second"<<endl;
             break;             // continue statement cannot be used in switch case
        
    default: cout<<"Default case"<<endl;
             break;
    }
}
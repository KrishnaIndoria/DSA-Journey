#include<iostream>
using namespace std;
int main(){
    int i = 5;
    int &j = i; // creates a refernce variable 

    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    cout<<j<<endl;
    j++;
    cout<<j<<endl;
}
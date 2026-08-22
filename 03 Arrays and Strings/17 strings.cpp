#include<iostream>
using namespace std;
int main(){
    string x;
    cout<<"Enter your name : ";
    // cin>>x; by this we can take input of only single word (only first word).
    getline(cin,x); // by this we can take input in the form of a sentence also.
    cout<<x;
}
// string is a datatype like int. 
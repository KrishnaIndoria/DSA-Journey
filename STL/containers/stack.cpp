#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s; // string data type stack
    s.push("krishna");
    s.push("indoria");
    cout<<s.top()<<endl; // gives the top value
    s.pop(); 
    cout<<"After pop"<<endl;
    cout<<s.top()<<endl;   
    cout<<s.empty();
}
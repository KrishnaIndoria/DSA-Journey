// The implementations above given are lengthy , which cannot be written for every stack uses
// so STL is used to make use of stacks which makes it easy
#include<iostream>
#include<stack>  //STL library is included
using namespace std;
int main(){
    stack<int>S;
    S.push(6);
    S.push(7);
    S.push(25);
    cout<<S.size()<<endl;
    cout<<S.top()<<endl;
    S.pop();
    cout<<S.top()<<endl;
    cout<<S.empty()<<endl;
    
}
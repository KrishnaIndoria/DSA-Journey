#include<iostream>
using namespace std;
int main(){
    int a = 7;
    cout<<a<<endl;

    if(true){
        int b =5;
        cout<<b<<endl;
    }
}

// cout<<b<<endl; wont print 5 because b can be accessed only inside the loop.

// if any variable is defined inside the block(loop,condition) it can be accesed only inside it. 
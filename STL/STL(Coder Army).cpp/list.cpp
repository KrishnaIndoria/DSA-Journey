#include<iostream>
#include<bits/stdc++.h> //this includes the whole std library
using namespace std;

int main(){
    // list is a doubly linked list here... we create a doubly linked list
    // so without writing the whole doubly linked list code like those class n implementation stuff , we create it using list
    list<int>l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_front(5);

    cout<<l.front()<<" "<<l.back()<<endl;
    cout<<l.size()<<endl;

    // delete
    l.pop_back();
    l.pop_front();
    cout<<l.front()<<" "<<l.back()<<endl;
    cout<<l.size()<<endl;

    for(auto it = l.begin(); it!=l.end();it++){ //it is a pointer
        cout<<*it<<" ";
    }
}
// vector is a data structure(like dynamic array) 
// it stores values in continuos memory location

#include<iostream>
#include<vector> // include library
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1); // inserts the element 1
    v.push_back(2); // inserts the element 2
    v.push_back(3);
    v.push_back(4);
    cout<<v.size()<<endl; // no of elements in the vector
    cout<<v.at(2)<<endl; //element at 2nd index
    cout<<v.front()<<endl; // first element
    cout<<v.back()<<endl; // last element
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    
    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.clear(); // empty's the vector
    
}
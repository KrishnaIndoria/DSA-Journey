#include<iostream>
#include<list> // include list stl
using namespace std;
int main(){
    list<int> l;
    l.push_back(2);
    l.push_front(1);

    for(int i:l){
        cout<<i<<" ";
    }

    l.erase(l.begin()); // removes the begining element in list
    cout<<"After erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }

    

}
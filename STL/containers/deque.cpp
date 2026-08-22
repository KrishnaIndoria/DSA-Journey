// deque is a data structure in which we can store values from both ends (front and back)
// in deque we can do both insertion and deletion at both the ends

#include<iostream>
#include<deque> // include its library
using namespace std;
int main(){
    deque<int>d;
    d.push_back(4); // inserts 4 from last
    d.push_front(1); //inserts 1 from first 
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_back(); // removes the last element
    cout<<"after removing the last element"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"element at 0th index is "<<d.at(0)<<endl; // prints element at 0th index
    cout<<d.empty(); // checks whether deque is empty or not
}
#include<iostream>
#include<array> // for using the library we must include it
using namespace std;
int main(){
   array<int,4> a={1,2,3,4}; //by using stl we use array like this
   // but we never use array by stl or we will never use array like this 

   cout<<a.at(2)<<endl; // element at 2nd index
   cout<<a.empty()<<endl; // array empty or not

   cout<<a.front()<<endl; // first element of array
   cout<<a.back()<<endl; // last element of array
}
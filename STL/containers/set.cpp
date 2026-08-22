// set is data structure which contains only unique values
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);

    for(int i:s){
        cout<<i<<" "; // automatically sorts the values
    }
    cout<<endl; 
    cout<<s.count(5)<<endl; // checks whether the element is present or not

}
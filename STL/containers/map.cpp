// map is a data structure which stores values in the form of keys
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="krishna";
    m[2]="steve";
    m[5]="tony";

    for(auto i:m){
        cout<<i.first<<" ";  // sorts automatically
    }
    cout<<endl;

    m.erase(5);
}
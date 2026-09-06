#include<iostream>
#include<bits/stdc++.h> //this includes the whole std library
using namespace std;

int main(){
    // set stores only unique values , stores in sorted order(ascending)
    // insertion,deletion,searching takes o(logn) TC
    // is implemented using avl trees in background (also black-red trees)
    // wew can sort in descending order too using greater<type> .

    set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(2);
    s.insert(6);
    s.insert(60);
    s.insert(100);
    s.insert(7);

    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<endl;
    }

    s.erase(60); //deletes 60 from set s.
}
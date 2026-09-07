#include<iostream>
#include<bits/stdc++.h> //this includes the whole std library
using namespace std;

int main(){
    // in multiset we can also store duplicate values
    // the values are stored in sorted order.
    // implemented using avl,red-black trees
    multiset<int>s;
    s.insert(10);
    s.insert(10);
    s.insert(20);

    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
}
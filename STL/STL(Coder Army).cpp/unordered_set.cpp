#include<iostream>
#include<bits/stdc++.h> //this includes the whole std library
using namespace std;

int main(){
    // unordered set stores only unique values (no duplicates)
    // but it does not store in any sorted or arranged manner
    // it stores in an unordered way(random)
    // insertion,deletion,searching takes o(1),constant time(very fast)
    // as it is implemented using hashing.

    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(60);

    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }

}
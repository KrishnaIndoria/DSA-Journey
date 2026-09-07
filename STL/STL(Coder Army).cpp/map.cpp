#include<iostream>
#include<bits/stdc++.h> //this includes the whole std library
using namespace std;

int main(){
    // map stores data in key-value pair
    // key should be unique,and are stored in a sorted way in terms of keys
    // implemented using avl or red-black trees
    // insertion,deletion,searching takes o(logn)
    // though it works like array only.. we can take keys as index and access values 

    map<int,int>m;
    m.insert(make_pair(20,30));
    // 20 is key and 30 is its value
    m.insert(make_pair(5,70));
    m.insert(make_pair(10,50));

    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    cout<<m[10]; //just like arrays,we can do something like indexing on keys(keys act like index)
}
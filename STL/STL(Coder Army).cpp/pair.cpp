#include<iostream>
#include<bits/stdc++.h> //this includes the whole std library
using namespace std;

int main(){
    // pair is like class(storing mutiple data of diff data type under same name)
    // pair is basically using class only in background
    // by using this we dont write the whole class code n just create tht using pair in 1-2 lines of code
    pair<string,int>p;
    p = make_pair("rohit",30);
    cout<<p.first<<" "<<p.second<<endl;

    pair<string,pair<int,int>>x;
    x.first = "Krish";
    x.second.first = 20;
    x.second.second = 54;
    cout<<x.first<<" "<<x.second.first<<" "<<x.second.second;
}


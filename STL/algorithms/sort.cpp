#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(12);
    v.push_back(13);
    v.push_back(5);

    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"after sorting"<<endl;
    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }



}
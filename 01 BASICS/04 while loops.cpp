#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    int i=1;
    while(i<=n){
        cout<<i<<" ";
        sum = sum+i;
        i=i+1;
    }
    cout<<endl;
    cout<<"sum of n is : "<<sum;
}
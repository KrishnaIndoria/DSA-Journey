// print even numbers using recursion.
#include<iostream>
using namespace std;
void print(int n){
    
    // base case
    if(n==2){
        cout<<n<<endl;
        return;
    }

    cout<<n<<endl;
    print(n-2);
}
int main(){
    int n = 6;
    print(n);
}
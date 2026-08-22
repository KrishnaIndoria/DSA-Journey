// giving base case and recursive function is mandatory
#include<iostream>
using namespace std;
int factorial(int n){
    // base case  
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);  // recursive relation or recursive call
}
int main(){
    cout<<"Enter the number:";
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<<ans<<endl;

}
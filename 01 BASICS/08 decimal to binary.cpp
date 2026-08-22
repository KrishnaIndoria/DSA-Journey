#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;

    int ans = 0;
    for(int i=0;n!=0;i++){
        int bit = n%1;
        ans = (bit*pow(10,i)) + ans;
        n=n>>1;
    }
cout<<"Answer is "<<ans<<endl;
}

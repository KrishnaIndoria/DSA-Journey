// sum of arrays using recursion
#include<iostream>
using namespace std;
int sumy(int *arr,int size,int sum){
    if(size==0){  // base case ,size 0 ka matalab yeh hai ki sare elements ka sum hogaya hai
        return sum;
    }
    sum = sum+arr[0];
    return sumy(arr+1,size-1,sum);   // recursive call
} 
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int sum=0;
    int ans = sumy(arr,size,sum);
    cout<<ans<<endl;
}
// print array using recursion
#include <iostream>
using namespace std;
void printarr(int arr[],int index,int n){
    // base case 
    if(index==n){
        return;
    }
    
    cout<<arr[index]<<" ";
    printarr(arr,index+1,n);
}
int main(){
    int arr[5] = {1,2,3,4,5};
    printarr(arr,0,5);
} 
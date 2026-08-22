#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;

    int arr[5];
    // giving values to array
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int sum = 0;
    for(int i=0;i<size;i++){
        sum = sum + arr[i];
    }
    cout<<"sum of the elements of the array is "<<sum<<endl;
}
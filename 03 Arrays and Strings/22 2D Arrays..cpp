#include<iostream>
using namespace std;
int main(){
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // we deciding the values
    // int arr[3][3] = {1,2,3,4,5,6,7,8,9}; will take input row wise
    // int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; will do it in row wise form
}
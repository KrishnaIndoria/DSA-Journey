#include<iostream>
using namespace std;
int getMin(int num[],int n){
    int min = INT8_MAX;

    for(int i=0;i<n;i++){
        if(min<num[i]){
            min = num[i];
        }
    }
    return min;
}

int getMax(int num[],int n){
    int max = INT8_MIN;

    for(int i=0;i<n;i++){
        if(num[i]>max){
            max = num[i];
        }
    }
    return max;
}
int main(){
    int size;
    cout<<"Enter the size of an array : ";
    cin>>size;

    int num[5];

    // taking input
    for(int i=1;i<size;i++){
        cin>>num[i];
    }

    cout<<"Maximum value is : "<<getMax(num,size)<<endl;
    cout<<"Minimum value is : "<<getMin(num,size)<<endl;


} 
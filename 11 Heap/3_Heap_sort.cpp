#include<iostream>
using namespace std;

void Heapify(int arr[],int index,int n){
    int largest = index;
    int left = 2*index+1;
    int right = 2*index+2;

    if(left<n && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<n && arr[largest]<arr[right]){
        largest=right;
    }

    if(largest!=index){
        swap(arr[largest],arr[index]);
        Heapify(arr,largest,n);
    }
}

void BuildMaxHeap(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        Heapify(arr,i,n);
    }
}

void PrintHeap(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortArray(int arr[],int n){
    for(int i=n-1;i>0;i--){
        swap(arr[i],arr[0]);
        Heapify(arr,0,i);
    }
}

int main(){
    int arr[] = {21,4,3,25,7,15,16,57,75,10}; //given a list, build it to a max heap
    BuildMaxHeap(arr,10);
    sortArray(arr,10);
    PrintHeap(arr,10);
}
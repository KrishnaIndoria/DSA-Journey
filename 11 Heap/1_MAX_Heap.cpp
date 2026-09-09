#include<iostream>
using namespace std;
class MaxHeap{
    int *arr;
    int size; //total no elements present
    int total_size; //size of the array

    public:

    MaxHeap(int n){
        arr = new int[n];
        size=0;
        total_size = n;
    }

    void insert(int value){
        if(size==total_size){
            cout<<"Heap overflow"<<endl;
            return;
        }

        arr[size] = value;
        int index = size;
        size++;

        // comparing with its parent after adding 
        while(index>0 && arr[index]>arr[(index-1)/2]){
            swap(arr[index],arr[(index-1)/2]);
            index = (index-1)/2;
        }

        cout<<arr[index]<<" is inserted into the heap"<<endl;
    }

    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void Heapify(int index){
        int largest = index;
        int left = 2*index+1;
        int right = 2*index+2;

        if(left<size&&arr[left]>arr[largest])
        largest = left;
        if(right<size&&arr[right]>arr[largest])
        largest = right;

        if(largest!=index){
            swap(arr[index],arr[largest]);
            Heapify(largest);
        }
    }

    void Delete(){
        if(size==0){
            cout<<"Heap underflow"<<endl;
            return;
        }
        cout<<arr[0]<<" is deleted from heap"<<endl;
        arr[0] = arr[size-1];
        size--;

        if(size==0)
        return;

        Heapify(0);
    }
};

int main(){
    MaxHeap H1(6);
    H1.insert(5);
    H1.insert(15);
    H1.insert(25);
    H1.insert(10);
    H1.insert(7);
    H1.insert(9); 
    H1.print();
    H1.Delete();
    H1.print();

}
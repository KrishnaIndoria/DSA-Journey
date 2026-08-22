//  implementation of queue using an circular array
#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int front,rear,size;

    public:
    Queue(int n){
        arr = new int[n];
        size = n;
        front = rear = -1;
    }

    // empty operation
    bool IsEmpty(){
        return front==-1;  //if front is at -1 index
    }

    // is queue full
    bool IsFull(){
        return (rear+1)%size==front;  //if rear is at last index
    }

    // push element into queue
    void push(int x){
        if(IsEmpty()){
            cout<<"Pushed "<<x<<" into the queue"<<endl;
            front=rear=0;
            arr[0] = x;
            return;
        }
        else if(IsFull()){
            cout<<"Queue overflow, queue is already full"<<endl;
            return;
        }

        else{
            rear = (rear+1)%size;
            arr[rear] = x;
            cout<<"Pushed "<<x<<" into the queue"<<endl;
        }
    }

    void pop(){
        if(IsEmpty()){
            cout<<"Queue underflow,queue is empty"<<endl;
            return;
        }
        else{
            if(front==rear){
                cout<<"popped "<<arr[front]<<" into the queue"<<endl;
                front = rear=-1;
            }
            else{
                cout<<"popped "<<arr[front]<<" into the queue"<<endl;
                front = (front+1)%size;
            }
        }

    }

    int start(){
        if(IsEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }

    }
};

int main(){
    Queue q(5);
    q.push(7);
    q.push(9);
    q.push(25);
    q.pop();
    cout<<q.start()<<endl;
}
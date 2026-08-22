// implementation of queue using linked lists
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

class Queue{
    Node *front;
    Node *rear;

    public:
    Queue(){
        front = rear = NULL;
    }

    bool IsEmpty(){
        return front==NULL;
    }

    void push(int x){
        if(IsEmpty()){
            cout<<"Pushed "<<x<<" into queue"<<endl;
            front = rear = new Node(x);
        }
        else{
            cout<<"Pushed "<<x<<" into queue"<<endl;
            rear->next = new Node(x);
            rear = rear->next;
        }
    }

    void pop(){
        if(IsEmpty()){
            cout<<"Queue underflow"<<endl;
            return;
        }
        else{
            cout<<"Popped "<<front->data<<" from the queue"<<endl;
            Node *temp=front;
            front = front->next;
            delete temp;
        }
    }
    int start(){
        if(IsEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            return front->data;
        }
    }
};
int main(){
    Queue q;
    // q.push(5);
    // q.push(7);
    // q.push(9);
    // q.push(25);
    // q.pop();
    q.start();
    q.IsEmpty();
    
}
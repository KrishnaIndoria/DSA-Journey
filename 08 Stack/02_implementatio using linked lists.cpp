// implementation of stack using linked lists
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

class Stack{
    Node *top;
    int size;

    public:
    Stack(){
        top = NULL;
        size = 0;
    }
    // push
    void push(int value){
        Node *temp = new Node(value); 
        if(temp==NULL){
            cout<<"Stack overflow"<<endl;
            return;
        }
        else{
            temp->next =  top;
            top = temp;
            size++;  //when element gets added size is increased
            cout<<"pushed"<<endl;
        }
    }
    // pop
    void pop(){
        if(top==NULL){
            cout<<"Stack underflow"<<endl;
        }
        else{
            Node *temp = top;
            cout<<"Poped"<<endl;
            top = top->next;
            delete temp;
            size--; //when a element is removed size is decreased
        }
    }
    // peek
    int peek(){
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else{
            return top->data;
        }
    }
    // IsEmpty
    bool IsEmpty(){
        if(top==NULL){
            return 1;
        }
        else{
            return 0;
        }
    }
    // IsSize
    int IsSize(){
        return size;
    }
};
int main(){
    Stack S;
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);
    S.pop();
    cout<<S.IsSize()<<endl;
    cout<<S.IsEmpty()<<endl;
    cout<<S.peek()<<endl;
}
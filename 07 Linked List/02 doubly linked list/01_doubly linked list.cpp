#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};
int main(){
    Node* head = NULL;

    // insert at start

    // if linked list does not exist from before
    if(head==NULL){
        head = new Node(5);
    }

    // already exists
    else{
        Node* temp = new Node(5);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    Node* curr = head;

    while (curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    
}
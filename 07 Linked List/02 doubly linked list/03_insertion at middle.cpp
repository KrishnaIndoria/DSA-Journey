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
    int arr[5] = {1,2,3,4,5};

    Node* head = NULL;
    Node* tail = NULL;

    // if there is no node from before
    for(int i=0;i<5;i++){
        if(head==NULL){
            head = new Node(arr[i]);
            tail = head;
        }
    // if a node exists from before
        else{
            Node* temp = new Node(arr[i]);
            temp->prev = tail;
            tail->next = temp;
            tail = temp;
        }
    }

    // to insert at a given position
    int x =2; //to insert a number at 2nd position
    x--;
    Node* curr = head;
    while(x!=0){
        curr = curr->next;
        x--;
    }

    Node* temp = new Node(25);  //to insert 25
    temp->prev = curr->prev;
    temp->next = curr;
    curr->prev->next = temp;
    curr->prev = temp;



    curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}
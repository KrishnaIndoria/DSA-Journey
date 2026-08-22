// delete the first node of linked list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

Node* createLinkedList(int arr[],int index,int size){
    // base case
    if(index==size){
        return NULL;
    }

    Node* temp = new Node(arr[index]);
    temp->next = createLinkedList(arr,index+1,size);
    return temp;
}
int main(){
    Node* head = NULL;
    int arr[5] = {1,2,3,4,5};

    head = createLinkedList(arr,0,5);

    // delete a node at start
    if(head!=NULL){
        Node* temp = head;
        head = head->next;    //head moves to the next node
        delete temp;   // and the first node is deleted ,(in this case '1' is deleted)
    }

    // print values
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}
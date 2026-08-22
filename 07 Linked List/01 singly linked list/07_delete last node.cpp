// delete the last node from linked list
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

    // delete last node
    Node* temp = head;

    if(head!=NULL){
        if(head->next==NULL){
            Node* temp = head;
            delete temp;
            head = NULL;
        }

        else{
            Node* current = head;
            Node* prev = NULL;
            while(current->next!=NULL){
                prev = current;
                current = current->next;
            }
            prev->next = NULL;   // stores Null in the last node's next
            delete current;
        }
    }


    // print values
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}
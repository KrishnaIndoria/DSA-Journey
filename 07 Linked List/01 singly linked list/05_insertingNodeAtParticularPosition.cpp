// inserting a node at a particular position in a linked list
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

    // inserting a node at a particular position

    int x = 3;  //inserting at 3rd index;
    int value = 25;  // 25 will be inserted at 3rd index in linked list

    Node* temp = head;
    x--;

    while(x--){
        temp = temp->next;
    }

    Node* temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;

    // print values
    temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}
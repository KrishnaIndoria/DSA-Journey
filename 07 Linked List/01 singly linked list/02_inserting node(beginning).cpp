// to insert the array values in a linked list
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
int main(){
    int arr[5] = {1,2,3,4,5};
    Node*head = NULL;

    // inserting the node at beginning

    // if linked list does not exist from before
    for(int i=0;i<5;i++){
         if(head==NULL){            
            head = new Node(arr[i]);
         }

    // if linked list exists from before
        else{
            Node* temp = new Node(arr[i]);
            temp->next = head;  
            head = temp;
        }
    }

    // printing the values
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
       
}


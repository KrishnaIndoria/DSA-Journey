// delete a particular node from its position
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

    // delete node from particular position
    int x = 3;  // remove 3rd node (removes 3)

    if(x==1){   //if it asks to delete first node
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    else{
        x--;
        Node* current = head;
        Node* prev = NULL;

        while(x--){
            prev = current;
            current = current->next;
        }
        prev->next =  current->next;
        delete current;
    }

    // print values
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}
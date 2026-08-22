// to insert node at end of linked list
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
    Node* head = NULL;
    Node* tail = NULL;

    for(int i=0;i<5;i++){
        // before the creation of linked list
        if(head==NULL){
            head = new Node(arr[i]);
            tail = head;
        }

        // after linked list is created 
        else{
            tail->next = new Node(arr[i]);
            tail = tail->next;    //tail is shifted to the new node's address
        }
    }

    // printing the values of linked list
    Node* temp;
    temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

 }
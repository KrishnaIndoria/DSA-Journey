// refer dynamic allocation once.
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;       //pointer 'next' of Node data type
        
    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
int main(){
    Node* node1 = new Node(10); //node1 is a pointer storing address of a object
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
}
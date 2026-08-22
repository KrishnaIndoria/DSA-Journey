// pre-order traversal
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int value){
        data = value;
        left=right=NULL;
    }
};
void preorder(Node* root){  //NLR
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
Node* BinaryTree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node* temp = new Node(x);
    cout<<"Enter the left child of "<<x<<": ";
    temp->left = BinaryTree();
    cout<<"Enter the right child of "<<x<<": ";
    temp->right = BinaryTree();
    return temp;  // will return the address
}

int main(){
    cout<<"Enter root node : ";
    Node*root=BinaryTree();
    preorder(root);
}
// Binary search tree (BST) is a specific type of binary tree where the nodes are arranged
// in a ordering, all left elements are smaller thn root->data n right elements are greater thn root->data.

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left,*right;

    Node(int value){
        data = value;
        left=right=NULL;
    }
};

void inorder(Node *root){
    if(root==NULL)
    return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

Node *insert(Node *root,int target){
    if(!root){
        Node *temp = new Node(target);
        return temp;
    }
    if(target < root->data){
        root->left = insert(root->left,target);
    }
    else{
        root->right = insert(root->right,target);
    }
    return root;
}
int main(){
    int arr[]= {7,5,9,1,3,10};

    Node *root = NULL;
    for(int i=0;i<6;i++){
        root = insert(root,arr[i]);
    }

    inorder(root); //for a bst, inorder is always sorted(ascending) order
}
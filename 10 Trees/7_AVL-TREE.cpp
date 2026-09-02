#include<iostream>
using namespace std;
class Node{
    public:
    int data,height;
    Node *left,*right;

    Node(int value){
        data = value;
        height=1;
        left=right=NULL;
    }
};

int getheight(Node *root){
    if(!root)
    return 0;

    return root->height;
}

int getbalance(Node *root){
    return getheight(root->left)-getheight(root->right);
}

Node *rightRotation(Node *root){
    Node *child = root->left;
    Node *childRight = child->right;
    child->right = root;
    root->left = childRight;

    root->height = 1+max(getheight(root->left),getheight(root->right));
    child->height = 1+max(getheight(child->left),getheight(child->right));

    return child;
}

Node *leftRotation(Node *root){
    Node *child = root->right;
    Node *childLeft = child->left;
    child->left = root;
    root->right = childLeft;

    root->height = 1+max(getheight(root->left),getheight(root->right));
    child->height = 1+max(getheight(child->left),getheight(child->right));

    return child;

}

Node *insert(Node *root,int key){
    if(!root)
    return new Node(key);

    if(root->data>key){
        root->left = insert(root->left,key);
    }
    else{
        root->right =  insert(root->right,key);
    }

     
    root->height = 1+max(getheight(root->left),getheight(root->right));

    int balance = getbalance(root);

    // left left case
    if(balance>1 && key<root->left->data)
       return rightRotation(root);
    // right right case
    else if(balance<-1 && key>root->right->data)
       return leftRotation(root);
    // left right case
    else if(balance>1 && key>root->left->data){
       root->left = leftRotation(root->left);
       return rightRotation(root);
    }
    // right left case
    else if(balance<-1 && key<root->right->data){
        root->right = rightRotation(root->right);
        return leftRotation(root);
    }
    // no unbalance
    else{
        return root;
    }
    

}

void inorder(Node *root){
    if(root==NULL)
    return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    Node *root = NULL;

    // duplicate elements are not allowed
    root = insert(root,10);
    root = insert(root,100);
    root = insert(root,1);
    root = insert(root,7);
    root = insert(root,5);
    root = insert(root,25);
    root = insert(root,50);

    cout<<"In order: "<<endl;
    inorder(root);
}
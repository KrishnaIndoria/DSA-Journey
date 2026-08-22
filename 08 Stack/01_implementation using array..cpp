// learn OOP's concept before this

// we are implementing stack with the help of arrays
#include<iostream>
using namespace std;
class Stack{
    int *arr;  
    int size;
    int top;  // index of the recently added element.( When stack is empty top == -1.)

    public:

    // constructor
    Stack(int s){
        size = s;
        top = -1; // we intialise the 
        arr = new int[s]; //isse ek array ban rha hai 's' size ka aur uska address arr mai store ho raha hai
    }

    // push
    void push(int value){
        if(top == size-1){
            cout<<"Stack will overflow"<<endl;
            return;
        }
        else{
            top++;
            arr[top]=value;
            cout<<"Pushed "<<value<< " into stack"<<endl;
        }
        
    }
    // pop
    void pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
        }
        else{
            cout<<"popping "<<arr[top]<<" from stack"<<endl;
            top--;
// we just move top pointer back and assume tht we have deleted the element 
        }
    }
    // peek
    int peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }
    // Isempty
    bool IsEmpty(){
        if(top==-1){
            return 1; //return 1 if empty
        }
        else{
            return 0; //return 0 if not empty
        }
    }
    // Issize
    int IsSize(){
        return top+1; //total elements present in stack(uptil top)
    }
};
int main(){
    Stack S(5); //5 size ka array create ho jayega and S is a object
    S.push(1);
    S.push(2);
    S.push(3);
    S.pop(); 
    cout<<S.peek()<<endl;
    cout<<S.IsSize()<<endl;
    cout<<S.IsEmpty()<<endl;

}
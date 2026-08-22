#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("Krishna");
    q.push("steve");
    q.push("tony");

    cout<<q.front()<<endl;
    q.pop(); // removing the element
    cout<<q.front()<<endl;

}
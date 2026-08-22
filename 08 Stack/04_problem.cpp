// check valid parenthesis or not , rohit negi dsa playlist
#include<iostream>
#include<stack>
using namespace std;
bool check(string str){
    stack<char>s;
    for(int i=0;i<str.size();i++){
        if(str[i]=='('){
            s.push(str[i]);
        }
        else{
            if(s.empty()==1){
                return 0;
            }
            else{
                s.pop();
            }
        }
    }
    return s.empty();
}
int main(){
    string str = "(())";
    cout<<check(str)<<endl;
    return 0;
}

#include<iostream>
using namespace std;
void update1(int n){  // here a new n is created , which is of update1() only
    n++;
}
void update2(int &j){  // reference variable is created which refers to 'n' of main()
    j++;               // 'j' is the reference name of n,has same memory address (&j=&n)
}
int main(){
    int n = 7;
    cout<<"Before: "<<n<<endl;
    update2(n);
    cout<<"After: "<<n<<endl;

}
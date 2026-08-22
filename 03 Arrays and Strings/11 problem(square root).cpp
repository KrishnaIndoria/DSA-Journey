// find square root of a number by binary search.

#include<iostream>
using namespace std;
int squareRoot(int n){
    int s = 0,e=n;
    int mid;
    int ans = -1;
    
    while(s<=e){
        mid = (s+e)/2;
        if(n==mid*mid){
            return mid;
        }
        else if((mid*mid)>n){
            e = mid-1;
        }
        else{
            ans = mid;
            s = mid + 1;
        }

    }
    return ans;
   
}
int main(){
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    cout<<"Square root of "<<a<<" is : "<<squareRoot(a);

}

// if not understanding dry run by yourself once and thn watch a video on it.
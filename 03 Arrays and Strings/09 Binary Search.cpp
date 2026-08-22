#include<iostream>
using namespace std;
int binarySearch(int arr[],int n, int key){
    int start = 0;
    int end = n-1;

    int mid = (start+end)/2;

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        else if(key>arr[mid]){     // go to right part of mid value
            start = mid+1;
        }
        else{                    // go to left part of mid value
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}
int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int evenindex = binarySearch(even,6,12);
    cout<<"Index of 12 is "<<evenindex<<endl;

    int oddindex  = binarySearch(odd,5,14);
    cout<<"Index of 14 is "<<oddindex<<endl;

} 
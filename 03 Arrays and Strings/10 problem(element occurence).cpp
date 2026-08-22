// find the elements first andd last occurence

#include<iostream>
using namespace std;

int firstOccurence(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid = (s+e)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;   
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid =(s+e)/2;
    }
    return ans;
}

int lastOccurence(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid = (s+e)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;    
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid =(s+e)/2;
    }
    return ans;
}

int main(){

    int odd[5] = {1,2,3,3,5};
    cout<<"First occurence of 3 is at index "<<firstOccurence(odd,5,3)<<endl;
    cout<<"last occurence of 3 is at index "<<lastOccurence(odd,5,3)<<endl;

} 



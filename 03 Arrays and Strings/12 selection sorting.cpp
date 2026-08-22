#include<iostream>
using namespace std;
void sortArray(int arr[],int n){
    for(int i=0;i<n-1;i++){ // we do not sort the last value or index.(so i<n-1)
     int minIndex = i;  // we assume tht i is smallest and store in minIndex.
     for(int j=i+1;j<n;j++){ // we search the smallest value still last index(so j<n)
        if(arr[j]<arr[minIndex]){
            minIndex = j; // we update minIndex by the index of the smallest value
        }
     }
     swap(arr[minIndex],arr[i]);
    } 
}
int main(){
    int arr[5] = {7,5,9,3,6};
    sortArray(arr,5);
    cout<<"after sorting"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}

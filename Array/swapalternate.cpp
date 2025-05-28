#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void swapalternate(int arr[], int n){
    for(int i = 0; i<n; i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    swapalternate(arr,n);
    printarray(arr,n);
    return 0;
}
#include<iostream>
using namespace std;
int uniquenumber(int arr[], int n){
    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]!= arr[j]){
                cout<<arr[i];
            }
        }
    }
}
//
int uniquenumber1(int arr[],int n){
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans ^= arr[i];
    }
    return ans;
}
int main(){
    int arr[]={1,2,3,4,1,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int unique = uniquenumber1(arr,n)
    cout<< unique;
    return 0;
}
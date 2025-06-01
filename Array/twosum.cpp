#include<iostream>
#include<vector>
using namespace std;
vector<int>twoSum(vector<int>& arr, int target){
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i]+arr[j]== target){
                return {i,j};
            }
        }
    }
    return {};
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int n=5;
    vector<int> result = twoSum(arr,n);
    cout<<result[0]<<" "<<result[1];
}
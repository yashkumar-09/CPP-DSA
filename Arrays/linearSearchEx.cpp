#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {12, 8, 4, 10, 21, 15, 45, 1, 19};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout<<"Enter target to find in array: ";
    cin>>target;
    cout<<linearSearch(arr, sizeOfArray, target);
}
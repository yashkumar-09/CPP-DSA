#include <iostream>
using namespace std;
void swapMaxMinElements(int arr[], int size){
    int MinElement = INT_MAX, MaxElement = INT_MIN, minIdx, maxIdx;
    for(int i=0; i<size; i++){
        if(arr[i]<MinElement){
            MinElement=arr[i];
            minIdx = i;
        }
        if(arr[i]>MaxElement){
            MaxElement=arr[i];
            maxIdx = i;
        }
    }
    arr[minIdx] = MaxElement;
    arr[maxIdx] = MinElement;
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {4, 8, 7, 5, 9, 13, 3};
    int sizeOfArray = sizeof(arr)/sizeof(arr[0]);
    swapMaxMinElements(arr, sizeOfArray);
}
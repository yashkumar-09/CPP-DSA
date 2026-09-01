#include <iostream>
using namespace std;
void uniqueValues(int arr[], int size){
    for(int i=0; i<size; i++){
        int count=0;
        for(int j=0; j<size; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int arr[] = {4,3,5,9,3,7,1,3,9,4};
    int sizeOfArray = sizeof(arr)/sizeof(arr[0]);
    uniqueValues(arr, sizeOfArray);
}
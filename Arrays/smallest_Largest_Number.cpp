#include <iostream>
using namespace std;
int printSmallestNumber(int arr[], int sizeOfArray){
    int smallestNum = INT_MAX;
    for(int i=0; i<sizeOfArray; i++){
        if(arr[i]<smallestNum){
            smallestNum = arr[i];
        }
    }
    return smallestNum;
}
int printLargestNumber(int arr[], int sizeOfArray){
    int LargestNum = INT_MIN;
    for(int i=0; i<sizeOfArray; i++){
        if(arr[i]>LargestNum){
            LargestNum = arr[i];
        }
    }
    return LargestNum;
}
int main(){
    int sizeOfArray;
    cout<<"Enter size of Array: ";
    cin>>sizeOfArray;
    int arr[sizeOfArray];
    cout<<"Enter Array elements: "<<endl;
    for(int i=0; i<sizeOfArray; i++){
        cin>>arr[i];
    }
    cout<<"Smallest Array element is: "<<printSmallestNumber(arr, sizeOfArray)<<endl;
    cout<<"Largest Array element is: "<<printLargestNumber(arr, sizeOfArray)<<endl;
}
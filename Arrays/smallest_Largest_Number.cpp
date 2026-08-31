#include <iostream>
using namespace std;
int returnSmallestNumber(int arr[], int sizeOfArray){
    int smallestNum = INT_MAX, indexOfSmallestNum;
    for(int i=0; i<sizeOfArray; i++){
        smallestNum = min(arr[i], smallestNum);
        if(arr[i]==smallestNum){
            indexOfSmallestNum = i;
        }
    }
    cout<<"Index of smallest element in array: "<<indexOfSmallestNum<<endl;
    return smallestNum;
}
int returnLargestNumber(int arr[], int sizeOfArray){
    int LargestNum = INT_MIN, indexOfLargestNum;
    for(int i=0; i<sizeOfArray; i++){
        LargestNum = max(arr[i], LargestNum);
        if(arr[i]==LargestNum){
            indexOfLargestNum = i;
        }
    }
    cout<<"Index of largest element in array: "<<indexOfLargestNum<<endl;
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
    int smallestElement = returnSmallestNumber(arr, sizeOfArray);
    cout<<"Smallest Array element is: "<<smallestElement<<endl;
    int largestElement = returnLargestNumber(arr, sizeOfArray);
    cout<<"Largest Array element is: "<<largestElement<<endl;
}
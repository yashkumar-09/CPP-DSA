#include <iostream>
using namespace std;
void intersectionOfArray(int arr1[], int arr2[], int arr1Size, int arr2Size){
    for(int i=0; i<arr1Size; i++){
        int count=0;
        for(int j=0; j<arr2Size; j++){
            if(arr1[i]==arr2[j]){
                count++;
            }
        }
        if(count>0){
            cout<<arr1[i]<<" ";
        }
    }
}
int main(){
    int arr1[] = {1, 2, 3, 4, 5, 9}, arr2[] = {2, 3, 7, 9, 5};
    int arr1Size = sizeof(arr1)/sizeof(arr1[0]);
    int arr2Size = sizeof(arr2)/sizeof(arr2[0]);

    intersectionOfArray(arr1, arr2, arr1Size, arr2Size);
}
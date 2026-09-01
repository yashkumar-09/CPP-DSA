#include <iostream>
using namespace std;
int main(){
    int sizeOfArray, sum=0, product=1;
    cout<<"Enter size of Array: ";
    cin>>sizeOfArray;
    int arr[sizeOfArray];
    cout<<"Enter array elements: "<<endl;
    for(int i=0; i<sizeOfArray; i++){
        cin>>arr[i];
    }

    for(int i=0; i<sizeOfArray; i++){
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"Sum of array elements = "<<sum<<endl;
    cout<<"Product of array elements = "<<product<<endl;
}
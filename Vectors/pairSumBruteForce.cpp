#include <iostream>
using namespace std;
int main(){
    int n = 4, target = 9;
    int arr[] = {2, 7, 11, 15};
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==target){
                cout<<"("<<i<<","<<j<<")"; //for idx
                cout<<"("<<arr[i]<<","<<arr[j]<<")"; //for elements on idx
            }
        }
    }
    return 0;
}
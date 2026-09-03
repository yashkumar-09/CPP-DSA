#include <iostream>
using namespace std;
int main(){
    int n=11;
    int arr[n] = {2,3,-2,0,9,3,-2,7,-9,3,2};
    int currSum = 0, maxSum = INT_MIN;
    for(int i=0; i<n; i++){
        currSum+=arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum<0){
            currSum = 0;
        }
    }
    cout<<"Maximum Subarray Sum = "<<maxSum;
    return 0;
}
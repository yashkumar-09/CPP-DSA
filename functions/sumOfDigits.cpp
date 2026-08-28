#include <iostream>
using namespace std;

int sumOfDigits(int n){
    int sum = 0;
    while(n>0){
        int r = n%10;
        sum+=r;
        n/=10;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Sum of Digits = "<<sumOfDigits(n);
    return 0;
}
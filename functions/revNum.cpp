#include <iostream>
using namespace std;
int revNum(int n){
    int revNum = 0;
    while(n>0){
        int rem = n%10;
        revNum = (revNum*10)+rem;
        n/=10;
    }
    return revNum;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Reverse Number = "<<revNum(n);
}
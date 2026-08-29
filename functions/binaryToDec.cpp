#include <iostream>
using namespace std;
int binaryToDec(int binary){
    int dec = 0, pow = 1;
    while(binary>0){
        int rem = binary%10;
        dec+=(rem*pow);
        binary/=10;
        pow*=2;
    }
    return dec;
}
int main(){
    int binary;
    cout<<"Enter binary number: ";
    cin>>binary;
    cout<<"Decimal = "<<binaryToDec(binary);
}
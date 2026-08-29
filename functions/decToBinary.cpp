#include <iostream>
using namespace std;
int decToBinary(int dec){
    int binary = 0, pow = 1;
    while(dec>0){
        int rem = dec%2;
        dec/=2;
        binary+=(rem*pow);
        pow*=10;
    }
    return binary;
}
int main(){
    int dec;
    cout<<"Enter decimal number: ";
    cin>>dec;
    cout<<"Binary = "<<decToBinary(dec);
}
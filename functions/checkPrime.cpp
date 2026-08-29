#include <iostream>
using namespace std;
void checkPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            cout<<n<<" is not Prime";
            return;
        }
        else{
            cout<<n<<" is Prime";
            return;
        }
    }
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    checkPrime(n);
}
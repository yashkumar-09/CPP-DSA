#include <iostream>
using namespace std;

int factorial(int x){
    int fact = 1;
    for(int i=2; i<=x; i++){
        fact*=i;
    }
    return fact;
}
int binomialCoe(int n, int r){
    int bCoefficient = (factorial(n))/(factorial(r)*(factorial(n-r)));
    return bCoefficient;
}

int main(){
    int n, r;
    cout<<"Enter n: "; cin>>n;
    cout<<"Enter r: "; cin>>r;

    cout<<"Binomial Coefficient: "<<binomialCoe(n, r);

    return 0;
}
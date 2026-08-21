#include <iostream>
using namespace std;
int main(){
    //sum of numbers from 1 to n

    int sum = 0, n=10;
    // for(int i=1; i<=n; i++){
    //     sum+=i;
    // }
    // cout<<sum;

    // sum of odd numbers from 1 to n
    // for(int i=1; i<=n; i+2){
    //     sum+=i;
    // }
    // cout<<sum;

    for(int i=1; i<=n; i++){
        if(i%3==0){
            sum+=i;
        }
    }
    cout<<sum;

    return 0;
}
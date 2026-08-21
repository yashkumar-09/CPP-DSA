#include <iostream>
using namespace std;

int main(){
    // numbers: 1 to 5
    int n = 1, sum = 0;
    // while(n<=5){
    //     cout<<n<<endl;
    //     n++;
    // }

    while(n<=10){
        sum+=n;
        n++;
    }
    cout<<sum;

    return 0;
}
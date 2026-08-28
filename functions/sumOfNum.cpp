#include <iostream>
using namespace std;
int sumOfNum(int x){
    int sum = 0;
    for(int i=1; i<=x; i++){
        sum+=i;
    }
    return sum;
}
int main(){
    cout<<"sum = "<<sumOfNum(5);
    return 0;
}
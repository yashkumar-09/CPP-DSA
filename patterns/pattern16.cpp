#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int space = n;
    for(int i=0; i<n; i++){
        int x = 1;
        for(int j=0; j<space; j++){
            cout<<" ";
        }
        for(int j=0; j<i+1; j++){
            cout<<x;
            x++;
        }
        for(int j=i+1; j>1; j--){
            cout<<j-1;
        }
        space--;
        cout<<endl;
    }
    return 0;
}
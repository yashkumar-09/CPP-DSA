#include <iostream>
using namespace std;

// Floyd's Triangle Pattern with numbers

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int x = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
    return 0;
}
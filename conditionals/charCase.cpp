#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character: ";
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<ch<<" is LowerCase.";
    }else if(ch>='A' && ch<='Z'){
        cout<<ch<<" is UpperCase.";
    }else{
        cout<<"Invalid Input";
    }

    return 0;
}
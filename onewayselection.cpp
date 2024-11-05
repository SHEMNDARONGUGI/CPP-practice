#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<endl<<"INPUT A NUMBER FROM KEYBOARD"<<endl;
    cin>>num;
    if(num%2==0)
    {
        cout<<endl<<"the number is even"<<endl;
    }
    else
    {
        cout<<endl<<"the number is odd"<<endl;
    }
    return 0;
}
//a programme that takes in two numbers and displays the greatest

#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout<<"INPUT FIRST INTEGER"<<endl;
    cin>>a;
    cout<<"INPUT SECOND INTEGER"<<endl;
    cin>>b;
    cout<<"INPUT THIRD NUMBER"<<endl;
    cin>>c;
    if(a > c && a>b){
        cout<<a<<" is bigger in the numbers given"<<endl;
    }
    else if(c>a && c>b){
        cout<<c<<" is bigger in the numbers given"<<endl;
    }
    else{
        cout<<b<<" is bigger in the numbers give"<<endl;

    }
    
    
}
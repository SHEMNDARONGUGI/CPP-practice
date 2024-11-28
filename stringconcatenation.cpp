#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first_name="";
    string last_name="";
    cout<<"Enter you first name"<<endl;
    cin>>first_name;
    cout<<"Enter you last name"<<endl;
    cin>>last_name;

    cout<<"Your name is "<<first_name + last_name<<endl;
    return 0;
}
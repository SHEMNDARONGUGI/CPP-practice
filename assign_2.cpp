#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string name = " ";
    string admission = " ";
    cout<<"Input your full name"<<endl;
    getline(cin, name);
    cout<<"Input your admission number"<<endl;
    getline(cin, admission);
    transform(name.begin(), name.end(), name.begin(), ::toupper);
    cout<<"Name: "<<name<<endl;
    cout<<"length of admission: "<<admission.length();
    return 0;
}
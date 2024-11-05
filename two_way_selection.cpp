#include <iostream>
using namespace std;
int main()
{
    int t;
    cout<<endl<<"INPUT TIME(integer)"<<endl;
    cin>>t;
    if(t <= 6)
    {
        cout<<endl<<"Person returns home by bus"<<endl;
    }
    else if(t <= 7)
    {
        cout<<endl<<"Person eats and returns home by bus"<<endl;
    }
    else
    {
        cout<<endl<<"Person eats and returns home by taxi"<<endl;
    }
    return 0;
}
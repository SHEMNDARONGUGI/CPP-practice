#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<endl<<"Input an integer value:";
    cin>>x;
    if(x%2==0)
    {
        cout<<endl<<"It is an Even number"<<endl;
    }    
    else{
        cout<<endl<<"It is an odd number"<<endl;
    }
    return 0;
}
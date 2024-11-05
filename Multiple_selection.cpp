#include <iostream>
using namespace std;
int main()
{
    int Average;
    cout<<endl<<"Input average Marks of students:"<<endl;
    cin>>Average;
    if(Average>=80 && Average<=100)
    {
        cout<<endl<<"Honors"<<endl;
    }
    else if(Average>=60)
    {
        cout<<endl<<"First Division"<<endl;
    }
    else if(Average>=50)
    {
        cout<<endl<<"Second Division"<<endl;
    }
    else if(Average>=40)
    {
        cout<<endl<<"Third Division"<<endl;
    }
    else
    {
        cout<<endl<<"Fail!!!"<<endl;
    }

    return 0;
}

// 80 to 100 Honours
// 60 to 79 First Division
// 50 to 59 Second Division
// 40 to 49 Third Division
// 0 t9 39 Fail
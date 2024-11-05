// continuous if statement

#include <iostream>
using namespace std;
int main()
{

    float sale, comm;
    char grade;
    cout<<endl<<"ENTER SALE:"<<endl;
    cin>>sale;
    if(sale>=10000)
    {
        cout<<endl<<"GRADE OF WORKERS(a/b)"<<endl;
        cin>>grade;
        if(grade=='a')
        {
            comm = sale * (10.0/100);
            cout<<endl<<"COMMISSION FOR GRADE 'a' IS:"<<comm<<endl;
        }
    
    else if(grade=='b')
        {
            comm = sale * (5.0/100);
            cout<<endl<<"COMMISSION FOR GRADE 'b' IS:"<<comm<<endl;
        }

    else{
        cout<<endl<<"WRONG GRADE!!!"<<endl;
    }
    }
    else{
        cout<<endl<<"NO COMMISSION."<<endl;
    }

    return 0;
}
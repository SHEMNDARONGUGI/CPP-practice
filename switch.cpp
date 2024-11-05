#include <iostream>
using namespace std;
#include <string>
int main()
{
    int month;
    cout<<endl<<"INPUT MONTH(1-12):"<<endl;
    cin>>month;
    string name_of_month;
    switch(month)
    {
        case 1: name_of_month = "JANUARY";
        break;

         case 2: name_of_month = "FEBRUARY";
        break;

         case 3: name_of_month = "MARCH";
        break;

         case 4: name_of_month = "APRIL";
        break;

         case 5: name_of_month = "MAY";
        break;

         case 6: name_of_month = "JUNE";
        break;

         case 7: name_of_month = "JULY";
        break;

         case 8: name_of_month = "AUGUST";
        break;

         case 9: name_of_month = "SEPTEMBER";
        break;

         case 10: name_of_month = "OCTOBER";
        break;

         case 11:name_of_month = "NOVEMBER";
        break;

         case 12:name_of_month = "DECEMBER";
        break;
    default:
    cout<<endl<<"WRONG INPUT"<<endl;
        
    }

    cout<<endl<<"The month is:"<<name_of_month<<endl;
    
    return 0;
}
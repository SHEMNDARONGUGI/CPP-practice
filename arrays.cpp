#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    string scores[5][4] = {

    {"Name","Maths","English","Kiswahili"},
    {"Steve Mwangi","60","50","100"},
    {"Shem Ndaro","70","60","90"},
    {"Caleb Maina","80","70","80"},
    {"Total","a","b","c"}

    
};


    for(int i=0; i<4; i++){
        for(int k=0; k<4; k++){
            cout<<setw(15)<<right<< scores[i][k]<<" ";
        }
        cout<< endl;
    }

    cout<<scores[3][1];

    return 0;
}
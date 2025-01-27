#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string marks[4][2] = {
        {"Subject", "Marks"},
        {"Maths", "90"},
        {"Computer", "77"},
        {"Chemistry", "69"}
    };

    //outputting in an orderly manner using cout
    for(int i = 0; i < 4 ; i++){
        for(int j = 0; j < 2 ; j++){
            cout<<setw(15)<<right<<marks[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int score;
    cout<<"INPUT SCORE:(1-100)"<<endl;
    cin>>score;
    string result = (score>= 40 && score <=100) ? "Pass" : "Fail";
    cout<<endl<<"YOUR SCORE IS A: "<<result<<endl;
    return 0;
}
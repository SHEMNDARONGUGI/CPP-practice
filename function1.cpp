#include <iostream>
using namespace std;
int sum(int start, int end)
{
    int total = 0;
    for(int num=start+2; num < end; num+=2){
        if(num % 2 == 0)
        {
            total+=num;
        }
    }
    return total;
}
int main()
{
    int start = 10;
    int end = 30;
    int Result = sum(start, end);
    cout<<"The Sum of even numbers between "<<start<<" and "<<end<<" is: "<<Result;
    return 0;
}
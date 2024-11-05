#include <iostream>
using namespace std;
int main()
{
    int x=6, y=2;
    int sum = x + y;
    int difference = x - y;
    int product = x * y;
    int quotient = x / y;
    int Z1=x++;
    int Z3=(--x-y)/++y;
    cout<<"\nSUM:"<<sum;
    cout<<"\nDIFFERENCE:"<<difference;
    cout<<"\nPRODUCT:"<<product;
    cout<<"\nQUOTIENT:"<<quotient;
    cout<<"\nZ1:"<<Z1;
    cout<<"\nZ3:"<<Z3;
    return 0;
}
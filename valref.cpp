//passing by value and passing by reference illustrations

#include <iostream>
using namespace std;

void swap(string &a, string &b);

int main()
{

    //passing by reference
    string x = "Computer Science";
    string y = "is a good course";
    string temp = " ";

    temp = x;
    x = y;
    y = temp;
    
    cout <<"X: "<< x <<endl;
    cout <<"Y: "<< y << endl;

    // passing by value

    string a = "C0244014032023";
    string b = "SHEM NDARO NGUGI";

    swap(a, b); // when passing by value we created copies of the values a and b by passing memory address

    cout<< "A: "<< a << endl;
    cout<<"B: "<< b << endl;
    return 0;
    
}

void swap(string &a, string &b){
    string temp = a;
    a = b;
    b = temp;
}

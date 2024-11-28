#include <iostream>
using namespace std;


int area_rect(int l, int w)
{
    return l * w;
}

int main()
{
    int length, width, area;

    
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    
    area = area_rect(length, width);

    
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}

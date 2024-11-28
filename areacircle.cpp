#include <iostream>
#include <cmath>

using namespace std;

double area_circle(double radius)
{
    return M_PI * radius * radius;
}

int main()
{
    double radius, area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = area_circle(radius);

    cout << "The area of the circle is: " << area << endl;

    return 0;
}

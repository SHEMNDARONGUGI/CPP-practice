//Most shapes require one or two dimensions to complete their area or perimeter. Write code that captures this generalization of dimensions and are( area should be a pure virtual function) in one abstract base class and shows the specializations of the shapes for the square and the rectangle classes both of which are derived from the said abstract base class.

#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function to compute area
    virtual double area() const = 0;

    // Virtual destructor
    virtual ~Shape() {}
};

// Derived class for Square
class Square : public Shape {
private:
    double side; // Length of the side of the square

public:
    Square(double s) : side(s) {}

    // Override area function for square
    double area() const override {
        return side * side; // Area = side^2
    }
};

// Derived class for Rectangle
class Rectangle : public Shape {
private:
    double length; // Length of the rectangle
    double width;  // Width of the rectangle

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override area function for rectangle
    double area() const override {
        return length * width; // Area = length * width
    }
};

int main() {
    // Create a square and a rectangle
    Shape* square = new Square(4.0); // Side length of 4
    Shape* rectangle = new Rectangle(4.0, 5.0); // Length 4, Width 5

    // Calculate and display areas
    cout << "Area of Square: " << square->area() << endl; // Output: 16
    cout << "Area of Rectangle: " << rectangle->area() << endl; // Output: 20

    // Clean up memory
    delete square;
    delete rectangle;

    return 0;
}

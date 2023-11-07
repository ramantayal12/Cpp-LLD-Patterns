#include <bits/stdc++.h>
using namespace std;

// The Open-Closed Principle which originated from the work of Bertrand Meyer, 
// states that classes should be open for extension but closed for modification. 
// This means that you should be able to add new functionality to a class without 
// modifying its existing code. Consider a class that represents various shapes 
// and calculates their areas. Instead of modifying the existing class each time 
// we add a new shape, we can leverage inheritance and polymorphism to achieve 
// the open-closed principle.

class Shape
{
public:
    virtual int getArea() = 0;
};

class Rectangle : public Shape
{
    int height, width;

public:
    Rectangle(int height, int width)
    {
        this->height = height;
        this->width = width;
    }
    int getArea()
    {
        return height * width;
    }
};

class Circle : public Shape
{
    int radius;

public:
    Circle(int radius)
    {
        this->radius = radius;
    }

    int getArea()
    {
        return radius * radius * 3.14;
    }
};

void printArea(Shape *shape)
{
    cout << "Area : " << shape->getArea() << endl;
}

int main()
{

    int h, w;
    cout << "Enter Height and Width for Rectangle : ";
    cin >> h >> w;
    Rectangle *rect = new Rectangle(h, w);
    printArea(rect);

    cout << "Enter Radius for Circle : ";
    int r;
    cin >> r;
    Circle *circle = new Circle(r);
    printArea(circle);
}
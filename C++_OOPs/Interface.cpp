#include <bits/stdc++.h>
using namespace std;

// The C++ interfaces are implemented using abstract classes and
// these abstract classes should not be confused with data abstraction
// which is a concept of keeping implementation details separate from associated data.

// A class is made abstract by declaring at least one of its functions as pure virtual function.
// A pure virtual function is specified by placing "= 0" in its declaration as follows −

// public, protected and private inheritance in C++
// public, protected, and private inheritance have the following features:

// public inheritance makes public members of the base class public in the derived class, and the protected members of the base class remain protected in the derived class.
// protected inheritance makes the public and protected members of the base class protected in the derived class.
// private inheritance makes the public and protected members of the base class private in the derived class.

// Base class
class Shape
{

protected:
    int height, width;

public:
    // pure virtual function providing interface framework.
    virtual int getArea() = 0;

    void setHeight(int height)
    {
        this->height = height;
    }

    void setWidth(int width)
    {
        this->width = width;
    }

    int getHeight()
    {
        return this->height;
    }

    int getWidth()
    {
        return this->width;
    }
};

// Derived Classes
class Triangle : public Shape
{
public:
    int getArea()
    {
        return height * width / 2;
    }
};

// Derived Classes
class Rectangle : public Shape
{
public:
    int getArea()
    {
        return height * width;
    }
};

int main()
{

    int width, height;
    cin >> width >> height;

    Rectangle *rect = new Rectangle();
    rect->setHeight(height);
    rect->setWidth(width);

    cout << "Area of Rectangle : " << rect->getArea() << endl;
}
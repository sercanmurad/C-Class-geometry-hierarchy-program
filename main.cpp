#include <iostream>
#include <cmath>

using namespace std;

class Shape {
public:
    double getArea();
    double getPerimeter();
    void printInfo();
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double a, double b) : width(a), height(b) {}

    double getArea() {
        return width * height;
    }

    double getPerimeter() {
        return 2 * (width + height);
    }

    void printInfo() {
        cout << "Rectangle: width = " << width << ", height = " << height << ", area = " << getArea() << ", perimeter = " << getPerimeter() << endl;
    }
};

class Triangle : public Shape {
private:
    double side1, side2, side3;
public:
    Triangle(double a, double b, double c) : side1(a), side2(b), side3(c) {}

    double getArea() {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double getPerimeter() {
        return side1 + side2 + side3;
    }

    void printInfo() {
        cout << "Triangle: side1 = " << side1 << ", side2 = " << side2 << ", side3 = " << side3 << ", area = " << getArea() << ", perimeter = " << getPerimeter() << endl;
    }
};

int main() {
    Rectangle rect(4, 5);
    Triangle tri(3, 4, 5);

    rect.printInfo();
    tri.printInfo();

    return 0;
}

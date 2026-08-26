#include <iostream>
#include <memory>
#include <vector>
using namespace std;
class Shape { public: virtual ~Shape() = default; virtual double area() const = 0; };
class Square : public Shape { double side; public: Square(double s) : side(s) {} double area() const override { return side * side; } };
class Circle : public Shape { double radius; public: Circle(double r) : radius(r) {} double area() const override { return 3.14159 * radius * radius; } };
int main() { vector<unique_ptr<Shape>> shapes; shapes.push_back(make_unique<Square>(2)); shapes.push_back(make_unique<Circle>(1)); for (const auto& shape : shapes) cout << shape->area() << '\n'; }

#include <iostream>
using namespace std;
class Point { public: int x, y; Point(int x, int y) : x(x), y(y) {} Point operator+(const Point& other) const { return {x + other.x, y + other.y}; } };
ostream& operator<<(ostream& out, const Point& point) { return out << '(' << point.x << ", " << point.y << ')'; }
int main() { cout << (Point(1, 2) + Point(3, 4)) << '\n'; }

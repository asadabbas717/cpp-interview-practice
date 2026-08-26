#include <iostream>
using namespace std;
class Student { static int count; int id; public: Student() : id(++count) {} int getId() const { return id; } static int total() { return count; } };
int Student::count = 0;
int main() { Student first, second; cout << first.getId() << " " << second.getId() << " total=" << Student::total() << '\n'; }

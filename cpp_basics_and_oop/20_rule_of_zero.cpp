#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Course { string title; vector<string> students; public: Course(string t) : title(move(t)) {} void enroll(string name) { students.push_back(move(name)); } void show() const { cout << title << ": " << students.size() << " students\n"; } };
int main() { Course course("C++"); course.enroll("Noor"); Course copy = course; copy.show(); }

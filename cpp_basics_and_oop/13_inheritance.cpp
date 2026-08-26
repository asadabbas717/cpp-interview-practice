#include <iostream>
#include <string>
using namespace std;
class Person { protected: string name; public: Person(string n) : name(move(n)) {} void introduce() const { cout << "I am " << name << '\n'; } };
class Developer : public Person { string language; public: Developer(string n, string l) : Person(move(n)), language(move(l)) {} void code() const { cout << name << " writes " << language << '\n'; } };
int main() { Developer developer("Omar", "C++"); developer.introduce(); developer.code(); }

#include <iostream>
#include <string>
using namespace std;
class Printable { public: virtual ~Printable() = default; virtual string toText() const = 0; };
class Invoice : public Printable { int amount; public: Invoice(int a) : amount(a) {} string toText() const override { return "Invoice: " + to_string(amount); } };
void print(const Printable& item) { cout << item.toText() << '\n'; }
int main() { Invoice invoice(500); print(invoice); }

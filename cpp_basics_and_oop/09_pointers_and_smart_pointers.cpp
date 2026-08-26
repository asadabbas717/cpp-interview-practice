#include <iostream>
#include <memory>
using namespace std;
int main() { int value = 7; int* view = &value; *view = 8; auto owned = make_unique<int>(42); cout << value << " " << *owned << '\n'; }

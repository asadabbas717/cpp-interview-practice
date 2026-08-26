#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(const vector<int>& a, const vector<int>& b) { vector<int> out; int i = 0, j = 0; while (i < (int)a.size() || j < (int)b.size()) { if (j == (int)b.size() || (i < (int)a.size() && a[i] < b[j])) out.push_back(a[i++]); else out.push_back(b[j++]); } return out; }
int main() { for (int value : merge({1, 3, 5}, {2, 4, 6})) cout << value << ' '; }

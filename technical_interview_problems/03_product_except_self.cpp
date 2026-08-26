#include <iostream>
#include <vector>
using namespace std;
vector<int> productExceptSelf(const vector<int>& a) {
    vector<int> out(a.size(), 1); int prefix = 1, suffix = 1;
    for (int i = 0; i < (int)a.size(); ++i) { out[i] = prefix; prefix *= a[i]; }
    for (int i = (int)a.size() - 1; i >= 0; --i) { out[i] *= suffix; suffix *= a[i]; }
    return out;
}
int main() { for (int x : productExceptSelf({1,2,3,4})) cout << x << ' '; }

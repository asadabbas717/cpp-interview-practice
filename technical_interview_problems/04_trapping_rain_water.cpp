#include <iostream>
#include <vector>
using namespace std;
int trap(const vector<int>& h) {
    int l=0, r=(int)h.size()-1, lm=0, rm=0, water=0;
    while (l < r) if (h[l] < h[r]) { lm=max(lm,h[l]); water+=lm-h[l++]; }
    else { rm=max(rm,h[r]); water+=rm-h[r--]; } return water;
}
int main() { cout << trap({0,1,0,2,1,0,1,3,2,1,2,1}); }

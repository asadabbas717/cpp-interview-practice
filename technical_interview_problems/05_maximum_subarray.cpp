#include <iostream>
#include <vector>
using namespace std;
int maxSubArray(const vector<int>& a) { int best=a[0], cur=a[0]; for(int i=1;i<(int)a.size();++i){cur=max(a[i],cur+a[i]);best=max(best,cur);}return best; }
int main() { cout << maxSubArray({-2,1,-3,4,-1,2,1,-5,4}); }

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> merge(vector<vector<int>> a) { sort(a.begin(),a.end()); vector<vector<int>> out; for(auto& x:a) if(out.empty()||out.back()[1]<x[0]) out.push_back(x); else out.back()[1]=max(out.back()[1],x[1]); return out; }
int main() { for(auto& x:merge({{1,3},{2,6},{8,10},{15,18}})) cout << '['<<x[0]<<','<<x[1]<<"] "; }

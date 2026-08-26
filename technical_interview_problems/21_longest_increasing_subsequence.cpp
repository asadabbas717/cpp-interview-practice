#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int lis(const vector<int>& a){vector<int> tails;for(int x:a){auto it=lower_bound(tails.begin(),tails.end(),x);if(it==tails.end())tails.push_back(x);else *it=x;}return tails.size();}
int main(){cout<<lis({10,9,2,5,3,7,101,18});}

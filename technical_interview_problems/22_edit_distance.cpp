#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int editDistance(const string& a,const string& b){vector<int> prev(b.size()+1),cur(b.size()+1);for(int j=0;j<=(int)b.size();++j)prev[j]=j;for(int i=1;i<=(int)a.size();++i){cur[0]=i;for(int j=1;j<=(int)b.size();++j)cur[j]=a[i-1]==b[j-1]?prev[j-1]:1+min({prev[j],cur[j-1],prev[j-1]});swap(prev,cur);}return prev.back();}
int main(){cout<<editDistance("horse","ros");}

#include <iostream>
#include <queue>
#include <vector>
using namespace std;
bool canFinish(int n,const vector<vector<int>>& pre){vector<vector<int>> g(n);vector<int> degree(n);for(auto& p:pre){g[p[1]].push_back(p[0]);++degree[p[0]];}queue<int> q;for(int i=0;i<n;++i)if(!degree[i])q.push(i);int done=0;while(!q.empty()){int u=q.front();q.pop();++done;for(int v:g[u])if(!--degree[v])q.push(v);}return done==n;}
int main(){cout<<boolalpha<<canFinish(2,{{1,0}});}

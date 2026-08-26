#include <iostream>
#include <vector>
using namespace std;
void flood(vector<vector<char>>& g,int r,int c){if(r<0||c<0||r==(int)g.size()||c==(int)g[0].size()||g[r][c]!='1')return;g[r][c]='0';flood(g,r+1,c);flood(g,r-1,c);flood(g,r,c+1);flood(g,r,c-1);}
int islands(vector<vector<char>> g){int count=0;for(int r=0;r<(int)g.size();++r)for(int c=0;c<(int)g[0].size();++c)if(g[r][c]=='1'){++count;flood(g,r,c);}return count;}
int main(){cout<<islands({{'1','1','0'},{'0','1','0'},{'1','0','1'}});}

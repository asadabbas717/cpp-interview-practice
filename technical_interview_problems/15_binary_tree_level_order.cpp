#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct Tree{int value;Tree* left=nullptr,*right=nullptr;};
vector<vector<int>> levelOrder(Tree* root){vector<vector<int>> out;if(!root)return out;queue<Tree*> q;q.push(root);while(!q.empty()){int n=q.size();out.push_back({});while(n--){Tree* p=q.front();q.pop();out.back().push_back(p->value);if(p->left)q.push(p->left);if(p->right)q.push(p->right);}}return out;}
int main(){Tree a{1},b{2},c{3};a.left=&b;a.right=&c;for(auto& row:levelOrder(&a)){for(int x:row)cout<<x<<' ';cout<<'\n';}}

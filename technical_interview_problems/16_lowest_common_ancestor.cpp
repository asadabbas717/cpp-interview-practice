#include <iostream>
using namespace std;
struct Tree{int value;Tree* left=nullptr,*right=nullptr;};
Tree* lca(Tree* root,Tree* a,Tree* b){if(!root||root==a||root==b)return root;Tree* l=lca(root->left,a,b),*r=lca(root->right,a,b);return l&&r?root:l?l:r;}
int main(){Tree a{3},b{5},c{1},d{6},e{2};a.left=&b;a.right=&c;b.left=&d;b.right=&e;cout<<lca(&a,&d,&e)->value;}

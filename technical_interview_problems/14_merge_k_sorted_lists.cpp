#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct Node{int value;Node* next=nullptr;};
Node* mergeK(vector<Node*> lists){auto cmp=[](Node* a,Node* b){return a->value>b->value;};priority_queue<Node*,vector<Node*>,decltype(cmp)> q(cmp);for(auto p:lists)if(p)q.push(p);Node dummy{0},*tail=&dummy;while(!q.empty()){Node* p=q.top();q.pop();tail->next=p;tail=p;if(p->next)q.push(p->next);}return dummy.next;}
int main(){Node a{1},b{4},c{2},d{3};a.next=&b;c.next=&d;for(Node* p=mergeK({&a,&c});p;p=p->next)cout<<p->value<<' ';}

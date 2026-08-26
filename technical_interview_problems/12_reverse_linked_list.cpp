#include <iostream>
using namespace std;
struct Node { int value; Node* next=nullptr; };
Node* reverse(Node* head){Node* prev=nullptr;while(head){Node* next=head->next;head->next=prev;prev=head;head=next;}return prev;}
int main(){Node a{1},b{2},c{3};a.next=&b;b.next=&c;for(Node* p=reverse(&a);p;p=p->next)cout<<p->value<<' ';}

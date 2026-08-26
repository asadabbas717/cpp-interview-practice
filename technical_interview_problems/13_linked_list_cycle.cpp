#include <iostream>
using namespace std;
struct Node { int value; Node* next=nullptr; };
bool hasCycle(Node* head){Node* slow=head,*fast=head;while(fast&&fast->next){slow=slow->next;fast=fast->next->next;if(slow==fast)return true;}return false;}
int main(){Node a{1},b{2},c{3};a.next=&b;b.next=&c;c.next=&b;cout<<boolalpha<<hasCycle(&a);}

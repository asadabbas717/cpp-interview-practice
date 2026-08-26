#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;
class LRUCache { int cap; list<pair<int,int>> items; unordered_map<int,list<pair<int,int>>::iterator> pos;
public: LRUCache(int c):cap(c){} int get(int key){if(!pos.count(key))return -1;items.splice(items.begin(),items,pos[key]);return pos[key]->second;} void put(int key,int value){if(pos.count(key)){pos[key]->second=value;items.splice(items.begin(),items,pos[key]);return;}if((int)items.size()==cap){pos.erase(items.back().first);items.pop_back();}items.push_front({key,value});pos[key]=items.begin();}};
int main(){LRUCache c(2);c.put(1,1);c.put(2,2);cout<<c.get(1)<<' ';c.put(3,3);cout<<c.get(2);}

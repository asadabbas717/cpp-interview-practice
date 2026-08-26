#include <cstdint>
#include <iostream>
using namespace std;
uint32_t reverseBits(uint32_t n){uint32_t out=0;for(int i=0;i<32;++i){out=(out<<1)|(n&1);n>>=1;}return out;}
int main(){cout<<reverseBits(43261596u);}

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string s = "programming";

    map<char, int> freq;

    for (char c : s)
    {
        freq[c]++;
    }

    for (auto item : freq)
    {
        if (item.second > 1)
        {
            cout << item.first << " = " << item.second << endl;
        }
    }

    return 0;
}
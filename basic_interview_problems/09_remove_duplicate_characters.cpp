#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string s = "programming";

    set<char> seen;

    for (char c : s)
    {
        if (seen.find(c) == seen.end())
        {
            cout << c;
            seen.insert(c);
        }
    }

    return 0;
}
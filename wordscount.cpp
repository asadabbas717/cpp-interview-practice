#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Contour Software Karachi";
    int words = 1;

    for (char c : s)
    {
        if (c == ' ')
        {
            words++;
        }
    }

    cout << words;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> v;
    string hex = "6f";
    string newstr;
    for (int i = 0; i < hex.length(); i++)
    {
        string asc = hex.substr(i, 2);
        char chr = (char)(int)strtol(asc.c_str(), NULL, 16);
        newstr.push_back(chr);
    }
    cout << newstr;
}
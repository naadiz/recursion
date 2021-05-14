#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int p(string s)
{
    int len = s.length();
    if (len == 1)
        return true;
    if (s[0] == s[len - 1])
        return p(s.substr(1, len - 2));
    return false;
}

int main()
{
    string s;
    cin >> s;

    std::transform(s.begin(), s.end(), s.begin(), ::toupper);

    if (p(s))
        cout << "TRUE" << endl;
    else
        cout << "FALSE" << endl;
}
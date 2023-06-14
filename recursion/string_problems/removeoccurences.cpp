#include <iostream>

using namespace std;

string removes(string &s, int idx, int n)
{

    if (idx == n)
    {
        return "";
    }
    string current = "";
    current += s[idx];

    return ((s[idx] == 'a') ? "" : current) + removes(s, idx + 1, n);
}

int main()
{
    string str = "bacaaueahd";
    int n = 11;
    cout << removes(str, 0, n) << endl;

    return 0;
}
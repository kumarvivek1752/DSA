#include <iostream>

using namespace std;

void incSeq(int n)
{

    if (n < 1)
    {
        return;
    }
    incSeq(n - 1);
    cout << n << " ";
}

int main()
{
    int n = 5;

    incSeq(n);

    return 0;
}
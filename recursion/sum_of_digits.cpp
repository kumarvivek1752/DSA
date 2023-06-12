#include <iostream>

using namespace std;

int sum(int n){
    if (n >= 0 && n <= 9)
    {
        return n;
    }
    return (n%10) + sum(n/10);
}

int main()
{
    int result = sum(5555);

    cout << result << endl;
    return 0;
}
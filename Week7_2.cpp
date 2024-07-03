#include <iostream>
using namespace std;

long long Factorial(int x)
{
    long long x_factorial = 1;
    for(int i = 2 ; i <= x ; i++)
    {
        x_factorial *= i;
    }
    return x_factorial;
}

int main()
{
    int n , m;
    long long combination;
    cout << "Please input n and m for C(n, m):";
    cin >> n >> m;

    combination = Factorial(n)/Factorial(m)/Factorial(n-m);

    cout << "C(" << n << ", " << m << ")=" << combination;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    char a_1;
    cout << "Please input a alphabet:";
    cin >> a_1;
    cout << "After converting: ";

    if(a_1 > 96)
    {
        a_1 -= 32;
    }
    else
    {
        a_1 += 32;
    }

    cout << a_1;
    return 0;
}

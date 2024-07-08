#include <iostream>
using namespace std;

int main()
{
    int h, i, j;
    cout << "Please input the height of your pyramid:";
    cin >> h;

    for(i = 1 ; i <= h ; i++)
    {
        for(j = 1 ; j <= i ; j++)
        {
            cout << "X";
        }

        cout << "\n";
    }
}

// Please input the height of your pyramid:5
// X
// XX
// XXX
// XXXX
// XXXXX

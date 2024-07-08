#include <iostream>
using namespace std;

int main()
{
    int h, i, j;
    cout << "Please input the height of your pyramid:";
    cin >> h;

    for(i = 1 ; i <= h ; i++)
    {
        for(j = i-1 ; j > 0 ; j--)
        {
            cout << " ";
        }

        for(j = h*2-(i*2-1) ; j > 0 ; j--)
        {
            cout << "X";
        }

        cout << "\n";
    }
}

// Please input the height of your pyramid:5
// XXXXXXXXX
//  XXXXXXX
//   XXXXX
//    XXX
//     X

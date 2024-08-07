#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int answer, input;
    unsigned seed = time(0);
    srand(seed);
    answer = 1 + rand() % 100;

    while(true)
    {
        cout << "Input a number between 1 and 100 (inclusive) (Or input -1 to leave):";
        cin >> input;

        if(input == answer)
        {
            cout << "You got it, the answer is " << answer;
            break;
        }
        else if(input == -1)
        {
            cout << "Bye!";
            break;
        }
        else if(input > answer)
        {
            cout << "Lower\n";
            continue;
        }
        else
        {
            cout << "Higher\n";
            continue;
        }
    }

    return 0;
}

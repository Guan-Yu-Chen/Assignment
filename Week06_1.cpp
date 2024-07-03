#include <iostream>
using namespace std;

int main()
{
    int num, fac, fac_1;
    cout << "Please input a positive integer:";
    cin >> num;
    cout << "Factors:";

    //find the smallest factor
    for(fac = 2 ; fac < num ; fac++)
    {
        if(num % fac == 0)
        {
            fac_1 = fac;
            break;
        }
        else
        {
            continue;
        }
    }

    //find all the factors
    for( ; fac <= num/fac_1 ; fac++)
    {
        if(num % fac == 0)
        {
            cout << " " << fac;
        }
        else
        {
            continue;
        }
    }

    return 0;
}

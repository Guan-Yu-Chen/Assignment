#include <iostream>
using namespace std;

bool is_Prime(int fac , int i = 2)
{
    for( ; i < fac ; i++)
    {
        if(fac % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num, fac, fac_1;
    cout << "Please input a positive integer:";
    cin >> num;
    cout << "Prime factors:";

    //find the smallest factor
    for(fac = 2 ; fac < num ; fac++)
    {
        if(num % fac == 0)
        {
            fac_1 = fac;
            break;
        }
    }

    //find all the factors
    for( ; fac <= num/fac_1 ; fac++)
    {
        if(num % fac == 0 && is_Prime(fac) == 1)
        {
            cout << " " << fac;
        }
    }
    return 0;
}

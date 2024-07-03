#include<iostream>
using namespace std;

int main()
{
  int Fn, n = 2, Fn_1 = 1, Fn_2 = 0;

  while( n <= 20 )
  {
    Fn = Fn_1 + Fn_2;

    cout << "F" << n << "=" << Fn << endl;

    Fn_2 = Fn_1;
    Fn_1 = Fn;

    n++;
  }

  return 0;
}

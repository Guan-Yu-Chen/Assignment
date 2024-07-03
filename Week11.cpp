#include <iostream>
#include <iomanip>
#include <cmath>
#include <chrono>
using namespace std;
using namespace std::chrono;

long double approxPIsquared_iter(int number)
{
   long double PI_num = 0;
   for( ; number > 0 ; number--)
   {
      PI_num += 8.0 / pow( (number*2 - 1) , 2);
   }
   return PI_num;
}

long double approxPIsquared_recur(int number)
{
   if (number == 1)
   {
      return 8.0;
   }
   else
   {
      return 8.0 / pow( (number*2 - 1) , 2) + approxPIsquared_recur(number - 1);
   }
}

int main()
{
   int number;
   steady_clock::time_point start1, start2, end1, end2;

   cout << "How many numbers are in the series?:";
   cin >> number;

   start1 = steady_clock::now();
   long double a = pow(approxPIsquared_iter(number), 0.5);
   end1 = steady_clock::now();
   start2 = steady_clock::now();
   long double b = pow(approxPIsquared_recur(number), 0.5);
   end2 = steady_clock::now();

   cout << setprecision(6) << "(iterative) By including " << number << " in the series, the approximated Pi is " << a << endl;
   cout << "It takes " << duration_cast<nanoseconds>(end1 - start1).count() / 1e9 << " secs" << endl;
   cout << setprecision(6) << "(recursive) By including " << number << " in the series, the approximated Pi is " << b << endl;;
   cout << "It takes " << duration_cast<nanoseconds>(end2 - start2).count() / 1e9 << " secs" << endl;

   return 0;
}

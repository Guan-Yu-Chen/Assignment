#include <iostream>
#include <iomanip>
#include <cmath>
#include <chrono>
#include <vector>
using namespace std;
using namespace std::chrono;

int main()
{
   const int length = 10000;
   const float times = 5000000;
   int point_x;
   int point_y;
   float circle = 0;
   srand(time(0));

   for(int i = 0 ; i < times ; i++)
   {
      point_x = rand()%length;
      point_y = rand()%length;

      if(point_x * point_x + point_y * point_y <= length * length)
      {
         circle++;
      }
   }

   cout << "The Pi is: " << fixed << setprecision(6) << circle/times*4;

   return 0;
}

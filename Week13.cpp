#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   const double times = 5000000;
   double point_x;
   double point_y;
   int circle = 0;
   srand(time(0));

   for(int i = 0 ; i < times ; i++)
   {
      point_x = double(rand())/RAND_MAX;
      point_y = double(rand())/RAND_MAX;

      if(point_x * point_x + point_y * point_y <= 1)
      {
         circle++;
      }
   }
   cout << "Test point: " << times << endl;
   cout << "The Pi is: " << fixed << setprecision(6) << double(circle)/times*4;

   return 0;
}

#include <iostream>
#include <iomanip>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main()
{
   float x;
   int item;
   int less_than_40 = 0;
   int less_than_30 = 0;
   int less_than_20 = 0;
   int less_than_11 = 0;
   double simulate_times = 10000000.0;
   steady_clock::time_point start, end;
   srand(time(0));

   start = steady_clock::now();
   for(int i = 0 ; i < simulate_times ; i++)
   {
      item = 0;
      for(int j = 0 ; j < 471 ; j++)
      {
         x = rand() / (double)RAND_MAX;
         if(x < 0.1)
         {
            item++;
         }
      }

      if(item <= 40)
      {
         less_than_40++;
         if(item <= 30)
         {
            less_than_30++;
            if(item <= 20)
            {
               less_than_20++;
               if(item <= 11)
               {
                  less_than_11++;
               }
            }
         }
      }
   }
   end = steady_clock::now();

   cout << "The estimated prob. of winning <= 40 items: " << less_than_40/simulate_times << endl;
   cout << "The estimated prob. of winning <= 30 items: " << less_than_30/simulate_times << endl;
   cout << "The estimated prob. of winning <= 20 items: " << less_than_20/simulate_times << endl;
   cout << "The estimated prob. of being unlucky as the streamer (<=11 items): " << less_than_11/simulate_times << endl;

   cout << "\nIt takes: " << duration_cast<nanoseconds>(end - start).count()/1000000000.0 << " seconds." << endl;
   return 0;

}

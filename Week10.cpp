#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   float a = 0, b = 0, random_num = 0;
   srand(time(0));
   enum Price{Car , Goat1 , Goat2};
   Price choice;

   for(int i = 1 ; i <= 5000 ; i++)
   {
      random_num = rand() % 3;
      if (random_num == 0)
      {
         choice = Car;
      }
      else if (random_num == 1)
      {
         choice = Goat1;
      }
      else
      {
         choice = Goat2;
      }

      if (choice == Car)
      {
         b++;
      }
      else
      {
         a++;
      }
   }

   cout << "If you do not switch, the prob. of winning is: " << b / 5000 << endl;
   cout << "If you switch, the prob. of winning is: " << a / 5000;

   return 0;
}

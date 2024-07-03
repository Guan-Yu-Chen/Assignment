#include <iostream>
using namespace std;

void mySwap(int S[], int i ,int j)
{
   if(S[i] > S[j])
   {
      S[i] += S[j];
      S[j] = S[i] - S[j];
      S[i] -= S[j];
   }
}

int main()
{
   srand(time(0));
   int Num[10] = {};
   for(int i = 0; i < 10 ; i++)
   {
      Num[i] = rand() % 1000 + 1;
   }

   cout << "Ten random numbers: ";
   for(int i = 0 ; i < 10 ; i++)
   {
      cout << Num[i] << " ";
   }

   for(int i = 10 ; i > 0 ; i--)
   {
      for(int j = 0 ; j < i-1 ; j++)
      {
         mySwap(Num , j , j+1);
      }
   }

   cout << "\nSorted by bubble sorting: ";
   for(int i = 0 ; i < 10 ; i++)
   {
      cout << Num[i] << " ";
   }

   return 0;
}

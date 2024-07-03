#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void PrintArray(vector <int> &A, int n)
{
   for(int i = 0 ; i < n ; i++)
   {
      for(int j = 0 ; j < n ; j++)
      {
         cout << "\t" << A[i*n + j];
      }
      cout << "\n";
   }
}

void CalArray(vector <int> &A, int n)
{
   for(int i = 0 ; i < n*n ; i++)
   {
      A[i] = 0;
   }

   for(int level = 1 ; level <= n ; level++)
   {
      for(int i = 1 ; i <= n*n ; i++)
      {
         if(i%n == 0)
         {
            A[i-1] += ((n + (level-1)*n) * (level + (i/n-1) * n));
         }
         else
         {
            A[i-1] += ((i%n + (level-1)*n) * (level + i/n * n));
         }
      }
   }
}

int main()
{
   int n;
   cout << "Please enter a number n to build a matrix A: ";
   cin >> n;

   vector<int> A(n*n);

   for(int i = 1 ; i <= n*n ; i++)
   {
      A[i-1] = i;
   }

   PrintArray(A, n);

   cout << "Matrix A multiplied by itself:\n";
   CalArray(A, n);
   PrintArray(A, n);

   return 0;
}

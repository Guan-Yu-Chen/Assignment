#include<iostream>
using namespace std;

int main(){

  int Year;
  cout << "Input a four digits AD year:";
  cin >> Year;

  if (Year >= 1000 & Year < 10000){
    if (Year % 400 == 0)
      cout << "Leap year";
    else if (Year % 100 != 0 & Year % 4 == 0)
      cout << "Leap year";
    else
      cout << "Common year";
  }
  else{
    cout << "Wrong input!";
  }
  return 0;
}

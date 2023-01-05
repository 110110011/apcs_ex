#include <iostream>
using namespace std;
struct Distance
{
  int m;
  float cm;
};
int
main ()
{
  struct Distance d1, d2;
  int n;
  d1.m = 1;
  d1.cm = 1.1234;

  cout << "Hello World" << d1.m << " " << d1.cm << "\n";

  d2.m = 1;
  d2.cm = 1.1234;

  cout << "Hello World" << d2.m << " " << d2.cm << "\n";

  cin >> n;
  d1.m =  n / 100;
  d1.cm = n * 0.01  ;
  cout << "Hello World  " << d1.m << "m" << d1.cm <<  "cm\n";


  return 0;
}

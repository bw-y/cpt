#include <iostream>
using namespace std;
int main()
{
  int a,b,c,d;
  d = sizeof(char);
  a=2;
  b=7;
  c = (a>b) ? a : b;
  cout << c << endl;

  cout << d << endl;
  return 0;
}

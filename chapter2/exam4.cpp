// custom countdown using while
#include <iostream>
using namespace std;

int main ()
{
  for (int n=10; n>0; n--) {
    if (n==3) continue;
    cout << n << ", ";
  }
  cout << "Fire!\n";
  return 0;
}

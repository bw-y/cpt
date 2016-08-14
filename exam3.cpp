// custom countdown using while
#include <iostream>
using namespace std;

int main ()
{
  for (int n=10; n>0; n--) {
    cout << n << ", ";
    if (n==3){
      cout << "countdown aborted!\n";
      break;
    }
  }
  cout << "Fire!\n";
  return 0;
}

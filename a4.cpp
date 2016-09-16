#include <iostream>
// #include <string>
// #include <iterator>
// #include <algorithm>
// #include <numeric>
using namespace std;

class Sample
{
  int x, y;
  public:
    Sample(){x=y=0;}
    Sample(int a, int b){x=a; y=b;}
    void disp()
    {
      cout << "x=" << x << ", y=" << y << endl;
    }
};

main()
{
  Sample s(2, 3), *p=&s;
  cout << *p << endl;
  p->disp();
//  s.disp();
}

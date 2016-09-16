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
    Sample(){ x=y=0; }
    Sample(int a, int b){x=a, y=b;}
    void disp()
    {
      cout << "x=" << x << ", y=" << y << endl;
    }
};

main()
{
  Sample s1, s2(1, 2), s3(10, 20);
  Sample *pa[3]={&s1, &s2, &s3};
  for(int i=0; i<3; i++)
    pa[i]->disp();
  return 0;
}

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
    Sample(int i, int j){x=i; y=j;}
    void copy(Sample &s){x=100; y=s.y;};
    void setxy(int i, int j){x=i; y=j;}
    void print(){cout << "x=" << x << ", y=" << y << endl;}
};

/*
void Sample::copy( Sample &s )
{
  x=s.x; y=s.y;
}
*/

void func( Sample s1, Sample &s2 )
{
  s1.setxy(11, 22);
  s2.setxy(30, 40);
}

main(){
  Sample p(1, 2), q;
//  q.copy(p);
  func(p, q);
  p.print();
  q.print();
  return 0;
}

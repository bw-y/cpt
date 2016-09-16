#include <iostream>
// #include <string>
// #include <iterator>
// #include <algorithm>
// #include <numeric>
using namespace std;

class base
{
  private: int x;
  public:
    void setx(int a){x=a;}
    int getx(){return x;}
};

main()
{
  base a[3], *p;
  cout << a << " ; " << p << endl;
  a[0].setx(20);
  a[1].setx(21);
  a[2].setx(22);

//  cout << a+3 << endl;
  for(p=a;p<a+3;p++)
    cout << p->getx() << endl;
//    cout << p->getx() << " ; " << p << endl;
//  cout << p+1 << endl;

  for(int i=0;i<=2;i++)
    cout << "a[" << i << "]=" << a[i].getx() << endl;
  return 0;
}

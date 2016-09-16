#include <iostream>  
// #include <string>  
// #include <iterator>  
// #include <algorithm>
// #include <numeric>  
using namespace std;

class base
{
  private:
    int x, y;
  public:
    void initxy(int a, int b){x=a; y=b;}
    void show()
    { cout << x << ", " << y << endl; }
};

main()
{
  base a, b;
  a.initxy(11, 17);
  a.show();
  b=a;
  b.show();  
  return 0;
}

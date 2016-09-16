#include <iostream>
// #include <string>
// #include <iterator>
// #include <algorithm>
// #include <numeric>
using namespace std;
// 30

template<Class T>

class Test
{
  T n;
  public:
    Test(){}
    Test(T i){n=i;}
    Test<T> operator+ (const Test<T>&s)
    {
      static Test<T>temp;
      _temp.n=n+s.n;
      return temp;
    }
    void disp(){cout<<"n="<<n<<endl;}
};

main()
{
  Test <int>t1(4), t2(5), t3;
  t3=t1+t2;
  t3.disp();
}

#include <iostream>
#include <string>
#include <complex>
using namespace std;

main() {
  complex <int> num1(2, 3);
  complex <float> num2(3.5, 4.5);

  string str1("real is ");
  string str2 = " image is ";
  cout << str1 << num1.real() << ',' << str2 << num1.imag() << endl;
  cout << str1 << num2.real() << ',' << str2 << num2.imag() << endl;
  
  return 0;
}

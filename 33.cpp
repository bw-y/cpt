#include <iostream>  
#include <string>  
// #include <iterator>  
// #include <algorithm>
// #include <numeric>  

using namespace std;

void swap(int[]);

main()
{
  int a[] = {3, 8};
  swap(a);
  cout << "main: " << a[0] << " " << a[1] << "\n";
  return 1;
}

void swap(int a[])
{
  int temp = a[0]; a[0] = a[1]; a[1] = temp;
  cout << "swap: " << a[0] << " " << a[1] << "\n";
}

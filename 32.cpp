#include <iostream>  
#include <string>  
// #include <iterator>  
// #include <algorithm>
// #include <numeric>  

using namespace std;

void swap(string *, string *);

main()
{
  string str1("now"), str2("ago");
  swap(&str1, &str2);
  cout << "str1 = " << str1 << " str2 = " << str2 << endl;
  return 0;
}

void swap(string * s1, string * s2)
{
  string temp = *s1; *s1 = *s2; *s2 = temp;
  cout << "swap to: str1 = " << s1 << " str2 = " << s2 << endl;
}

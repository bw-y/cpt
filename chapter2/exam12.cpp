// custom countdown using while
#include <iostream>
using namespace std;

int divide(int a, int b){
  return (a / b);
}

float divide(float a, float b){
  return (a / b);
}

int main(){
  int x = 5, y = 2;
  float n = 5.0, m = 2.0;
  cout << divide(x, y);
  cout << endl;
  cout << divide(n, m);
  cout << endl;
  return 0;
}

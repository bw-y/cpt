#include <iostream>
using namespace std;

int res_row(int a){
  int i;
  for (i = 1; i <= a; i++){
    cout << i << "x" << a << "=" << i * a << "\t";
  }
  cout << "\n";
}

int main(){
  int i, t;
  for (i = 0; i < 10; i++){
    res_row(i);
  }
  return 0;
}

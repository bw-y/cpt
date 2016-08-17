#include <iostream>
#define WIDTH 10
#define HEIGHT 10
using namespace std;

int jimmy [HEIGHT][WIDTH];
int n, m;

int main(){
  int t = 0;
  for (n = 0; n < HEIGHT; n++) {
    for (m = 0; m < WIDTH; m++) {
      jimmy[n][m] = (n + 1) * (m + 1);
      if (t == n) {
        cout << jimmy[n][m] << "\t";
      } else {
        t++;
        cout << "\n";
        cout << jimmy[n][m] << "\t";
      }
    }
  }
  return 0;
}

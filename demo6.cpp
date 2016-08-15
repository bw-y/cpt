#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
  char mybuffer[100];
  float price;
  int quantity;
  cout << "Enter price: ";
  cin.getline(mybuffer, 100);

  price = atof(mybuffer);
  cout << "Enter quantity: ";

  cin.getline(mybuffer, 100);
  quantity = atoi(mybuffer);

  cout << "Total price: " << price * quantity;
  return 0;
}

#include <iostream>
using namespace std;


int main() {
  int i, a;
  cout << "Wpisz liczbę. ";
  cin >> a;
  int div [a];
  div [0] = 1;
  i = 1;
  //cout << div.str();
  cout << "Dzielniki liczby " << a << " to:\n";
  while (i <= a) {
    //cout << i;
    //cout << "d" << a % i << "d";
    if (a % i == 0) {
      cout << i << endl;
    }
    i++;
  }

}

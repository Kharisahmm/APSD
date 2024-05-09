#include <iostream>

using namespace std;

int main() {
  int sum = 0;

  for (int i = 1; i <= 10; i++) {
    int genap = 2 * i;
    sum += genap;
    cout << genap << " + ";
  }

  cout << "= " << sum << endl;

  return 0;
}


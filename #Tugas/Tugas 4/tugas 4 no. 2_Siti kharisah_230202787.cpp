#include <iostream>

using namespace std;

int main() {
  int sum = 0;

  for (int i = 1; i <= 10; i++) {
    int ganjil = 2 * i - 1;
    sum += ganjil;
    cout << ganjil << " + ";
  }

  cout << "= " << sum << endl;

  return 0;
}


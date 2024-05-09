#include <iostream>

using namespace std;

int main() {
  int n = 5; // Jumlah baris (sesuaikan dengan kebutuhan)

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      int ganjil = 2 * j - 1;
      cout << ganjil << " ";
    }
    cout << endl;
  }

  return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n = 2; // Bilangan genap awal
    int sum = 0; // Inisialisasi total penjumlahan

    // Loop untuk membuat segitiga siku
    for (int i = 2; i <= 10; i += 2) {
        // Loop untuk mencetak baris
        for (int j = n; j <= i; j += 2) {
            cout << j;
            if (j < i)
                cout << " + ";
            else
                cout << " = ";
            sum += j; // Menambahkan nilai ke total penjumlahan
        }
        cout << sum << endl; // Mencetak total penjumlahan per baris
    }
    return 0;
}


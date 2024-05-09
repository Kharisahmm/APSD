#include <iostream>
using namespace std;

int main() {
    int n = 10; // Bilangan genap awal
    int sum = 0; // Inisialisasi total penjumlahan

    // Loop untuk membuat segitiga siku terbalik
    for (int i = n; i >= 2; i -= 2) {
        // Loop untuk mencetak baris
        for (int j = n; j >= i; j -= 2) {
            cout << j;
            if (j > i)
                cout << " + ";
            else
                cout << " = ";
            sum += j; // Menambahkan nilai ke total penjumlahan
        }
        cout << sum << endl; // Mencetak total penjumlahan per baris
    }
    cout << "----------" << endl;
    cout << sum + 10 << endl; // Mencetak total keseluruhan dengan menambahkan bilangan genap terakhir
    return 0;
}


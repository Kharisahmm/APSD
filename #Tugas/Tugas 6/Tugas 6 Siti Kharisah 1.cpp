#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int jumlahMahasiswa;
  string namaMahasiswa;
  float nilaiUTS, nilaiUAS, nilaiAkhir;
  char nilaiHuruf;

  // Meminta input jumlah mahasiswa
  cout << "Masukkan jumlah mahasiswa: ";
  cin >> jumlahMahasiswa;

  // Buat tabel
  cout << "\n| No | Nama Mahasiswa | Nilai UTS | Nilai UAS | Nilai Akhir | Nilai Huruf |\n";
  cout << "|---|---|---|---|---|---|";

  // Looping untuk setiap mahasiswa
  for (int i = 1; i <= jumlahMahasiswa; i++) {
    // Meminta input data mahasiswa
    cout << "\n| " << i << " | ";
    cout << "Masukkan nama mahasiswa: ";
    cin >> namaMahasiswa;
    cout << "Masukkan nilai UTS: ";
    cin >> nilaiUTS;
    cout << "Masukkan nilai UAS: ";
    cin >> nilaiUAS;

    // Menghitung nilai akhir
    nilaiAkhir = (nilaiUAS * 0.4) + (nilaiUTS * 0.6);

    // Menentukan nilai huruf
    if (nilaiAkhir >= 80) {
      nilaiHuruf = 'A';
    } else if (nilaiAkhir >= 70) {
      nilaiHuruf = 'B';
    } else if (nilaiAkhir >= 56) {
      nilaiHuruf = 'C';
    } else if (nilaiAkhir >= 47) {
      nilaiHuruf = 'D';
    } else {
      nilaiHuruf = 'E';
    }

    // Menampilkan hasil dalam tabel
    cout << "| " << i << " | " << namaMahasiswa << " | " << nilaiUTS << " | " << nilaiUAS << " | " << nilaiAkhir << " | " << nilaiHuruf << " |\n";
  }

  return 0;
}


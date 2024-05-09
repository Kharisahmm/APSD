#include <iostream>

using namespace std;

int main() {
  // Menampilkan judul program
  cout << "PROGRAM HITUNG NILAI RATA-RATA DAN JUARA PERLOMBAAN" << endl;

  // Deklarasi variabel
  string nama;
  float nilaiPertandingan1, nilaiPertandingan2, nilaiPertandingan3, nilaiRataRata;
  int juara;

  // Meminta input data siswa
  cout << "Nama Siswa: ";
  cin >> nama;
  cout << "Nilai Pertandingan I: ";
  cin >> nilaiPertandingan1;
  cout << "Nilai Pertandingan II: ";
  cin >> nilaiPertandingan2;
  cout << "Nilai Pertandingan III: ";
  cin >> nilaiPertandingan3;

  // Menghitung nilai rata-rata
  nilaiRataRata = (nilaiPertandingan1 + nilaiPertandingan2 + nilaiPertandingan3) / 3;

  // Menentukan juara
  if (nilaiRataRata > 80) {
    juara = 1;
  } else if (nilaiRataRata > 75) {
    juara = 2;
  } else if (nilaiRataRata > 65) {
    juara = 3;
  } else {
    juara = 0;
  }

  // Menampilkan hasil perhitungan
  cout << endl << "Siswa yang bernama " << nama << endl;
  cout << "Memperoleh nilai rata-rata " << nilaiRataRata << " dan menjadi juara ke-" << juara << " dari hasil perlombaan yang diikutinya." << endl;

  // Menahan tampilan
  cout << "Tekan enter untuk keluar...";
  cin.ignore();
  getchar();

  return 0;
}


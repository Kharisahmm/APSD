#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  string namaKaryawan;
  int golonganJabatan, pendidikan, jumlahJamKerja;
  float gajiPokok, tunjanganJabatan, tunjanganPendidikan, honorLembur, gajiTotal;

  // Input data
  cout << "PROGRAM HITUNG GAJI KARYAWAN KONTRAK PT. DINGIN DAMAI" << endl;
  cout << "--------------------------------------------------------" << endl;
  cout << "Masukkan Nama Karyawan: ";
  cin >> namaKaryawan;
  cout << "Masukkan Golongan Jabatan (1/2/3): ";
  cin >> golonganJabatan;
  cout << "Masukkan Tingkat Pendidikan (SMA/D1/D3/S1): ";
  cin >> pendidikan;
  cout << "Masukkan Jumlah Jam Kerja: ";
  cin >> jumlahJamKerja;

  // Hitung gaji pokok
  gajiPokok = 300000;

  // Hitung tunjangan jabatan
  switch (golonganJabatan) {
    case 1:
      tunjanganJabatan = gajiPokok * 0.05;
      break;
    case 2:
      tunjanganJabatan = gajiPokok * 0.1;
      break;
    case 3:
      tunjanganJabatan = gajiPokok * 0.15;
      break;
    default:
      tunjanganJabatan = 0;
  }

  // Hitung tunjangan pendidikan
  switch (pendidikan) {
    case 1: // SMA
      tunjanganPendidikan = gajiPokok * 0.025;
      break;
    case 2: // D1
      tunjanganPendidikan = gajiPokok * 0.05;
      break;
    case 3: // D3
      tunjanganPendidikan = gajiPokok * 0.2;
      break;
    case 4: // S1
      tunjanganPendidikan = gajiPokok * 0.3;
      break;
    default:
      tunjanganPendidikan = 0;
  }

  // Hitung honor lembur
  if (jumlahJamKerja > 8) {
    honorLembur = (jumlahJamKerja - 8) * 3500;
  } else {
    honorLembur = 0;
  }

  // Hitung gaji total
  gajiTotal = gajiPokok + tunjanganJabatan + tunjanganPendidikan + honorLembur;

  // Tampilkan hasil
  cout << endl << "Karyawan atas nama " << namaKaryawan << endl;
  cout << "Honor yang diterima:" << endl;
  cout << "Tunjangan Jabatan: Rp " << tunjanganJabatan << endl;
  cout << "Tunjangan Pendidikan: Rp " << tunjanganPendidikan << endl;
  cout << "Honor Lembur: Rp " << honorLembur << endl;
  cout << "+-------------------------" << endl;
  cout << "Total Gaji: Rp " << gajiTotal << endl;

  return 0;
}


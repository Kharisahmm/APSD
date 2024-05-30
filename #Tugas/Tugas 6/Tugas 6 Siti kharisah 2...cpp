#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Pegawai {
    string nama;
    int jamKerja;
    int honorLembur;
    int totalHonor;
};

int main() {
    int jumlahData;
    cout << "Masukkan jumlah data pegawai: ";
    cin >> jumlahData;

    vector<Pegawai> daftarPegawai(jumlahData);

    for (int i = 0; i < jumlahData; ++i) {
        cout << "Masukkan nama pegawai ke-" << i+1 << ": ";
        cin >> daftarPegawai[i].nama;
        cout << "Masukkan jam kerja pegawai ke-" << i+1 << ": ";
        cin >> daftarPegawai[i].jamKerja;

        if (daftarPegawai[i].jamKerja > 8) {
            daftarPegawai[i].honorLembur = (daftarPegawai[i].jamKerja - 8) * 5000;
        } else {
            daftarPegawai[i].honorLembur = 0;
        }

        daftarPegawai[i].totalHonor = 15000 + daftarPegawai[i].honorLembur;
    }

    // Tampilkan tabel hasil
    cout << "| No | Nama Pegawai | Jam Kerja | Honor Lembur | Total Honor |\n";
    cout << "|----|--------------|-----------|--------------|-------------|\n";
    for (int i = 0; i < jumlahData; ++i) {
        cout << "| " << i+1 << "  | " << daftarPegawai[i].nama << "     | " << daftarPegawai[i].jamKerja << "         | " << daftarPegawai[i].honorLembur << "        | " << daftarPegawai[i].totalHonor << "       |\n";
    }

    return 0;
}


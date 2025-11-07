#include <iostream>
#include <string>

using namespace std;

// Struct untuk menyimpan data siswa
struct Siswa {
    string namaDepan;
    string namaBelakang;
    int skorTes;
    char grade;
};

// Fungsi untuk membaca data siswa
void bacaData(Siswa siswa[], int jumlah) {
    for (int i = 0; i < jumlah; i++) {
        cout << "Siswa " << (i + 1) << ":" << endl;
        cout << "Nama depan: ";
        cin >> siswa[i].namaDepan;
        cout << "Nama belakang: ";
        cin >> siswa[i].namaBelakang;
        cout << "Skor tes (0-100): ";
        cin >> siswa[i].skorTes;
    }
}

// Fungsi untuk memberikan grade
void beriGrade(Siswa siswa[], int jumlah) {
    for (int i = 0; i < jumlah; i++) {
        if (siswa[i].skorTes >= 90) {
            siswa[i].grade = 'A';
        } else if (siswa[i].skorTes >= 80) {
            siswa[i].grade = 'B';
        } else if (siswa[i].skorTes >= 70) {
            siswa[i].grade = 'C';
        } else if (siswa[i].skorTes >= 60) {
            siswa[i].grade = 'D';
        } else {
            siswa[i].grade = 'F';
        }
    }
}

// Fungsi untuk mencari skor tertinggi
int cariSkorTertinggi(Siswa siswa[], int jumlah) {
    int tertinggi = 0;
    for (int i = 0; i < jumlah; i++) {
        if (siswa[i].skorTes > tertinggi) {
            tertinggi = siswa[i].skorTes;
        }
    }
    return tertinggi;
}

// Fungsi untuk mencetak siswa dengan skor tertinggi
void cetakSiswaTertinggi(Siswa siswa[], int jumlah, int skorTertinggi) {
    cout << "\nSiswa dengan skor tertinggi (" << skorTertinggi << "):" << endl;
    for (int i = 0; i < jumlah; i++) {
        if (siswa[i].skorTes == skorTertinggi) {
            cout << siswa[i].namaBelakang << ", " << siswa[i].namaDepan << endl;
        }
    }
}

// Fungsi untuk mencetak semua siswa
void cetakSemuaSiswa(Siswa siswa[], int jumlah) {
    cout << "\nInformasi Siswa:" << endl;
    for (int i = 0; i < jumlah; i++) {
        cout << siswa[i].namaBelakang << ", " << siswa[i].namaDepan 
             << " - Skor: " << siswa[i].skorTes << " - Grade: " << siswa[i].grade << endl;
    }
}

int main() {
    const int JUMLAH_SISWA = 20; 
    Siswa siswa[JUMLAH_SISWA]; 
    
    // Panggil fungsi-fungsi
    bacaData(siswa, JUMLAH_SISWA);
    beriGrade(siswa, JUMLAH_SISWA);
    cetakSemuaSiswa(siswa, JUMLAH_SISWA);
    int skorTertinggi = cariSkorTertinggi(siswa, JUMLAH_SISWA);
    cetakSiswaTertinggi(siswa, JUMLAH_SISWA, skorTertinggi);
    
    return 0;
}


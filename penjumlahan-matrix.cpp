#include <iostream>

using namespace std;

void tampilkanMatriks(int matriks[][10], int baris, int kolom) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << matriks[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int matriksA[10][10], matriksB[10][10];
    int hasilJumlah[10][10], hasilKurang[10][10];
    int baris, kolom;

    cout << "Masukkan jumlah baris matriks (maks 10): ";
    cin >> baris;
    cout << "Masukkan jumlah kolom matriks (maks 10): ";
    cin >> kolom;

    if (baris > 10 || kolom > 10 || baris <= 0 || kolom <= 0) {
        cout << "Ukuran baris/kolom tidak valid. Maksimal 10 dan harus positif." << endl;
        return 1; 
    }

    cout << "\nMasukkan elemen untuk Matriks A:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Elemen A[" << i << "][" << j << "]: ";
            cin >> matriksA[i][j];
        }
    }

    cout << "\nMasukkan elemen untuk Matriks B:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Elemen B[" << i << "][" << j << "]: ";
            cin >> matriksB[i][j];
        }
    }

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            hasilJumlah[i][j] = matriksA[i][j] + matriksB[i][j];
            hasilKurang[i][j] = matriksA[i][j] - matriksB[i][j];
        }
    }

    cout << "\n--- Matriks A ---" << endl;
    tampilkanMatriks(matriksA, baris, kolom);

    cout << "\n--- Matriks B ---" << endl;
    tampilkanMatriks(matriksB, baris, kolom);

    cout << "\n--- Hasil Penjumlahan (A + B) ---" << endl;
    tampilkanMatriks(hasilJumlah, baris, kolom);

    cout << "\n--- Hasil Pengurangan (A - B) ---" << endl;
    tampilkanMatriks(hasilKurang, baris, kolom);

    return 0;
}
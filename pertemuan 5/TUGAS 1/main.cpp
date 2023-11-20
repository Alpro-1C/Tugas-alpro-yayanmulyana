#include <iostream>
using namespace std;


void tampilkanGanjil(int batas) {
    cout << "\nBilangan ganjil antara 1 dan " << batas << " adalah: ";
    for (int i = 1; i <= batas; i += 2) {
        cout << i << " ";
    }
}


void tampilkanGenap(int batas) {
    cout << "\nBilangan genap antara 1 dan " << batas << " adalah: ";
    for (int i = 2; i <= batas; i += 2) {
        cout << i << " ";
    }
}


void tampilkanPrima(int batas) {
    cout << "\nBilangan Prima antara 1 dan " << batas << " adalah: ";
    for (int i = 2; i <= batas; i++) {
        int faktor = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                faktor++;
            }
        }
        if (faktor == 2) {
            cout << i << " ";
        }
    }
}

// hitung jumlah ganjil, genap, dan prima
void hitungJumlah(int batas, int &jumlahGanjil, int &jumlahGenap, int &jumlahPrima) {
    for (int i = 1; i <= batas; i += 2) {
        jumlahGanjil++;
    }

    for (int i = 2; i <= batas; i += 2) {
        jumlahGenap++;
    }

    for (int i = 2; i <= batas; i++) {
        int faktor = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                faktor++;
            }
        }
        if (faktor == 2) {
            jumlahPrima++;
        }
    }
}


void tampilkanFaktor(int jumlah) {
    cout << "\nFaktor-faktor dari jumlah tersebut adalah: ";
    for (int i = 1; i <= jumlah; i++) {
        if (jumlah % i == 0) {
            cout << i << " ";
        }
    }
}

int main() {
    int batas;
    cout << "Masukkan batas bilangan positif: ";
    cin >> batas;

    int jumlahGanjil = 0, jumlahGenap = 0, jumlahPrima = 0;

    tampilkanGanjil(batas);
    tampilkanGenap(batas);
    tampilkanPrima(batas);

    hitungJumlah(batas, jumlahGanjil, jumlahGenap, jumlahPrima);

    cout << "\n\nJumlah semua bilangan ganjil antara 1 dan " << batas << " adalah: " << jumlahGanjil;
    cout << "\nJumlah semua bilangan genap antara 1 dan " << batas << " adalah: " << jumlahGenap;
    cout << "\nJumlah semua bilangan prima antara 1 dan " << batas << " adalah: " << jumlahPrima;

    tampilkanFaktor(jumlahGanjil);
    tampilkanFaktor(jumlahGenap);
    tampilkanFaktor(jumlahPrima);

    return 0;
}

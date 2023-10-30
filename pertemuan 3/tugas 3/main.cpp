#include <iostream>
using namespace std;

int main() {
    int pilihan;
    double luas;

    cout << "Program Menghitung Luas\n";
    cout << "Pilih bentuk:\n";
    cout << "1. Persegi\n";
    cout << "2. Persegi Panjang\n";
    cout << "3. Segitiga\n";
    cout << "Masukkan pilihan (1/2/3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1: // Persegi
            double sisi;
            cout << "Masukkan panjang sisi persegi: ";
            cin >> sisi;
            luas = sisi * sisi;
            break;
        case 2: // Persegi Panjang
            double panjang, lebar;
            cout << "Masukkan panjang persegi panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar persegi panjang: ";
            cin >> lebar;
            luas = panjang * lebar;
            break;
        case 3: // Segitiga
            double alas, tinggi;
            cout << "Masukkan panjang alas segitiga: ";
            cin >> alas;
            cout << "Masukkan tinggi segitiga: ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            break;
        default:
            cout << "Pilihan tidak valid.\n";
            return 1;
    }

    cout << "Luas: " << luas << endl;

    return 0;
}

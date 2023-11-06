#include <iostream>
using namespace std;

int main() {
    int tinggi;

    // Meminta pengguna untuk memasukkan tinggi segitiga
        cout << "Masukkan tinggi segitiga: ";
        cin >> tinggi;

    // Perulangan untuk gambar segitiga
    for (int i = 1; i <= tinggi; i++) {
        // buat spasi untuk membuat segitiganya
        for (int j = 1; j <= tinggi - i; j++) {
        cout << " ";
        }

        // buat bintang buat gambar atas segitiga
        for (int k = 1; k <= 2 * i - 1; k++) {
        cout << "*";
        }

        // Pindah ke baris baru setelah menggambar satu baris segitiga
        cout << endl;
    }

    return 0;
}

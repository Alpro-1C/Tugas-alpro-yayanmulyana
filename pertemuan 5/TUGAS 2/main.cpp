#include <iostream>
using namespace std;


void gambarSegitiga(int tinggi);

int main() {
    int tinggi;

    // MINTA INPUT TINGGI
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;


    gambarSegitiga(tinggi);

}


void gambarSegitiga(int tinggi) {
    // PERULANGAN BUAT GAMBAR SEGITIGA
    for (int i = 1; i <= tinggi; i++) {
        // buat spasi untuk membuat segitiganya
        for (int j = 1; j <= tinggi - i; j++) {
            cout << " ";
        }

        // buat bintang buat gambar atas segitiga
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }


        cout << endl;
    }

}

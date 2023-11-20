#include <iostream>
using namespace std;

// Fungsi MANGGIL FIBONACCI
void tampilkanDeretFibonacci(int n) {
    int a = 0, b = 1;

    cout << "Deret Fibonacci pertama " << n << " angka: ";

    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int selanjutnya = a + b;
        a = b;
        b = selanjutnya;
    }

    cout << endl;
}

int main() {
    int n;
    cout << "Masukkan panjang deret Fibonacci: ";
    cin >> n;

    // TAMPILAN AKHIRNYA
    tampilkanDeretFibonacci(n);

    return 0;
}

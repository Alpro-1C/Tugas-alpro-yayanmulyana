#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan panjang deret Fibonacci: ";
    cin >> n;

    int a = 0, b = 1; // Angka awal deret

    cout << "Deret Fibonacci pertama " << n << " angka: ";

    for (int i = 0; i < n; i++) {
    cout << a << " ";
        int selanjutnya = a + b;
        a = b;
        b = selanjutnya;
    }

    cout << endl;

    return 0;
}

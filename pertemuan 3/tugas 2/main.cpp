#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Masukkan angka pertama: ";
    cin >> num1;

    cout << "Masukkan angka kedua: ";
    cin >> num2;

    cout << "Masukkan angka ketiga: ";
    cin >> num3;

    if (num1 >= num2 && num1 >= num3) {
        cout << "Angka terbesar adalah: " << num1 << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << "Angka terbesar adalah: " << num2 << endl;
    } else {
        cout << "Angka terbesar adalah: " << num3 << endl;
    }

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int num, max, min;


    cout << "Masukkan angka pertama: ";
    cin >> num;
    max = num;
    min = num;


    while (true) {
        cout << "Masukkan angka (0 untuk berhenti): ";
        cin >> num;

        if (num == 0) {
            break;
        }

        if (num > max) {
            max = num;
        }

        if (num < min) {
            min = num;
        }
    }


    cout << "Nilai tertinggi: " << max << endl;
    cout << "Nilai terendah: " << min << endl;

    return 0;
}

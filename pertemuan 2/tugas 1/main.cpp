#include <iostream>

int main() {
    int firstValue = 10;
    int secondValue = 8;
    int temp; // Variabel tambahan

    // Menukar nilai menggunakan variabel tambahan
    temp = firstValue;
    firstValue = secondValue;
    secondValue = temp;

    std::cout << "Setelah pertukaran, firstValue = " << firstValue << " dan secondValue = " << secondValue << std::endl;

    return 0;
}

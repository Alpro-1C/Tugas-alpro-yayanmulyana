#include <iostream>

int main() {
    int firstValue = 10;
    int secondValue = 8;

    // Menukar nilai tanpa variabel tambahan
    firstValue = firstValue ^ secondValue;
    secondValue = firstValue ^ secondValue;
    firstValue = firstValue ^ secondValue;

    std::cout << "Setelah pertukaran, firstValue = " << firstValue << " dan secondValue = " << secondValue << std::endl;

    return 0;
}

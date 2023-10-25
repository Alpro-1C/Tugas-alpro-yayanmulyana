#include <iostream>

int main() {
    int N, M;

    // Input jumlah bebek (N) dan jumlah teman (M)
    std::cout << "Masukkan jumlah bebek (N): ";
    std::cin >> N;
    std::cout << "Masukkan jumlah teman (M): ";
    std::cin >> M;

    // Menghitung berapa banyak bebek yang akan diberikan kepada masing-masing teman
    int bebekPerTeman = N / M;

    // Menghitung sisa bebek yang tidak habis dibagi
    int sisaBebek = N % M;

    std::cout << "Setiap teman akan mendapatkan " << bebekPerTeman << " ekor bebek." << std::endl;
    std::cout << "Sisa bebek yang tidak habis dibagi adalah " << sisaBebek << " ekor." << std::endl;

    return 0;
}

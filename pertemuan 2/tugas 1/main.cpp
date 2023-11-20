#include <iostream>

using namespace std;

int main()
{
  cout << "##  Program C++ Biodata Mahasiswa  ##" << endl;
  cout << "====================================" << endl;
  cout << endl;

  string nama, nim, fakultas, jurusan, kota_asal, alamat;

  cout << "Nama mahasiswa: ";
  getline(cin,nama);

  cout << "NIM: ";
  getline(cin,nim);

  cout << "Fakultas: ";
  getline(cin,fakultas);

  cout << "Jurusan: ";
  getline(cin,jurusan);

  cout << "Kota Asal: ";
  getline(cin,kota_asal);

  cout << "Alamat: ";
  getline(cin,alamat);

  cout << endl;

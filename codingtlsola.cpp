#include <iostream>
#include <iomanip>

int main() {
    // Perbedaan Celcius dan Kelvin
    const double selisih_celcius_kelvin = 273;

    // Deklarasi variabel untuk derajat
    double derajat;

    // Meminta input suhu celcius yang akan di ubah
    std::cout << "Masukkan suhu celcius yang Anda miliki:  ";
    std::cin >> derajat;

    // Menghitung berapa suhu kelvin
    double suhu_kelvin = derajat + selisih_celcius_kelvin;

    // Menampilkan hasil
    std::cout << "Dengan suhu celcius " << derajat << ", Anda bisa mendapatkan "
              << std::fixed << std::setprecision(2) << suhu_kelvin << " Suhu Kelvin." << std::endl;

    return 0;
}

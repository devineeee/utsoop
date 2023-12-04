#include <iostream>
#include <string>

class MobilBalap {
private:
    std::string nama;
    std::string model;
    double kecepatan;

public:
    // Konstruktor untuk inisialisasi
    MobilBalap(std::string nama, std::string model, double kecepatan)
        : nama(nama), model(model), kecepatan(kecepatan) {}

    // Method untuk mempercepat mobil
    void percepat(double tambahanKecepatan) {
        kecepatan += tambahanKecepatan;
        std::cout << "Mobil " << nama << " dipercepat. Kecepatan sekarang: " << kecepatan << " km/jam" << std::endl;
    }

    // Method untuk memperlambat mobil
    void perlambat(double penguranganKecepatan) {
        kecepatan -= penguranganKecepatan;
        std::cout << "Mobil " << nama << " diperlambat. Kecepatan sekarang: " << kecepatan << " km/jam" << std::endl;
    }

    // Method untuk menampilkan informasi mobil
    void tampilkanInformasi() const {
        std::cout << "Informasi Mobil" << std::endl;
        std::cout << "Nama: " << nama << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Kecepatan: " << kecepatan << " km/jam" << std::endl;
    }
};

int main() {
    // Membuat objek MobilBalap
    MobilBalap mobil1("Ferrari", "458 Italia", 200.0);

    // Menampilkan informasi mobil awal
    mobil1.tampilkanInformasi();

    // Mempercepat mobil
    mobil1.percepat(50.0);

    // Memperlambat mobil
    mobil1.perlambat(20.0);

    // Menampilkan informasi mobil setelah aksi
    mobil1.tampilkanInformasi();

    return 0;
}

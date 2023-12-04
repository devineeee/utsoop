#include <iostream>
#include <string>

class RekeningBank {
public:
    std::string namaPemilik;
    int nomorRekening;
    double saldo;

public:
    // Konstruktor untuk inisialisasi
    RekeningBank(std::string nama, int nomor) : namaPemilik(nama), nomorRekening(nomor), saldo(0.0) {}

    // Method untuk menambah saldo
    void tambahSaldo(double jumlah) {
        saldo += jumlah;
        std::cout << "Saldo ditambahkan. Saldo sekarang: " << saldo << std::endl;
    }

    // Method untuk mengurangi saldo
    void kurangiSaldo(double jumlah) {
        if (jumlah <= saldo) {
            saldo -= jumlah;
            std::cout << "Saldo dikurangi. Saldo sekarang: " << saldo << std::endl;
        } else {
            std::cout << "Saldo tidak mencukupi untuk pengurangan." << std::endl;
        }
    }

    // Method untuk menampilkan informasi rekening
    void tampilkanInfo() const {
        std::cout << "Informasi Rekening:" << std::endl;
        std::cout << "Nama Pemilik: " << namaPemilik << std::endl;
        std::cout << "Nomor Rekening: " << nomorRekening << std::endl;
        std::cout << "Saldo: " << saldo << std::endl;
    }
};

int main() {
    // Membuat objek RekeningBank
    RekeningBank rekening("Apin", 12345);

    // Menampilkan informasi rekening awal
    rekening.tampilkanInfo();

    // Menambahkan saldo
    rekening.tambahSaldo(7000.0);

    // Mengurangi saldo
    rekening.kurangiSaldo(50.0);

    // Menampilkan informasi rekening akhir
    rekening.tampilkanInfo();

    return 0;
}

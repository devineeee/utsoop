#include <iostream>

class PersegiPanjang {
private:
    double panjang;
    double lebar;

public:
    // Setter untuk panjang
    void setPanjang(double p) {
        panjang = p;
    }

    // Getter untuk panjang
    double getPanjang() const {
        return panjang;
    }

    // Setter untuk lebar
    void setLebar(double l) {
        lebar = l;
    }

    // Getter untuk lebar
    double getLebar() const {
        return lebar;
    }

    // Method untuk menghitung luas
    double hitungLuas() const {
        return panjang * lebar;
    }

    // Method untuk menghitung keliling
    double hitungKeliling() const {
        return 2 * (panjang + lebar);
    }
};

int main() {
    // Membuat objek PersegiPanjang
    PersegiPanjang persegiPanjang;

    // Menggunakan setter untuk mengatur panjang dan lebar
    persegiPanjang.setPanjang(12);
    persegiPanjang.setLebar(2);

    // Menggunakan getter untuk mendapatkan panjang dan lebar
    std::cout << "Panjang: " << persegiPanjang.getPanjang() << std::endl;
    std::cout << "Lebar: " << persegiPanjang.getLebar() << std::endl;

    // Menghitung dan menampilkan luas dan keliling
    std::cout << "Luas: " << persegiPanjang.hitungLuas() << std::endl;
    std::cout << "Keliling: " << persegiPanjang.hitungKeliling() << std::endl;

    return 0;
}

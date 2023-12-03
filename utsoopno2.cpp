#include <iostream>
#include <cmath>

class Tabung {
private:
    double jariJari;
    double tinggi;

public:
    // Setter untuk jari-jari
    void setJariJari(double r) {
        jariJari = r;
    }

    // Getter untuk jari-jari
    double getJariJari() const {
        return jariJari;
    }

    // Setter untuk tinggi
    void setTinggi(double h) {
        tinggi = h;
    }

    // Getter untuk tinggi
    double getTinggi() const {
        return tinggi;
    }

    // Method untuk menghitung volume tabung
    double hitungVolume() const {
        return M_PI * pow(jariJari, 2) * tinggi;
    }

    // Method untuk menghitung luas permukaan tabung
    double hitungLuasPermukaan() const {
        return 2 * M_PI * jariJari * (jariJari + tinggi);
    }
};

int main() {
    // Membuat objek Tabung
    Tabung tabung;

    // Menggunakan setter untuk mengatur jari-jari dan tinggi
    tabung.setJariJari(2);
    tabung.setTinggi(7);

    // Menggunakan getter untuk mendapatkan jari-jari dan tinggi
    std::cout << "Jari-Jari: " << tabung.getJariJari() << std::endl;
    std::cout << "Tinggi: " << tabung.getTinggi() << std::endl;

    // Menghitung dan menampilkan volume dan luas permukaan tabung
    std::cout << "Volume: " << tabung.hitungVolume() << std::endl;
    std::cout << "Luas Permukaan: " << tabung.hitungLuasPermukaan() << std::endl;

    return 0;
}

#include <iostream>
#include <cmath>   
using namespace std;

int main() {
    int pilihan;
    double p, l, t, r, volume, a, tinggi;

    do {
        cout << "\nMENU\n";
        cout << "0. KELUAR\n";
        cout << "1. HITUNG VOLUME BALOK\n";
        cout << "2. HITUNG VOLUME BOLA\n";
        cout << "3. HITUNG VOLUME KERUCUT\n";
        cout << "4. HITUNG VOLUME SILINDER\n";
        cout << "5. HITUNG VOLUME LIMAS SEGITIGA\n";
        cout << "MASUKKAN PILIHAN ANDA : ";
        cin >> pilihan;

        switch (pilihan) {
        case 1: 
            cout << "Masukkan panjang: "; cin >> p;
            cout << "Masukkan lebar: "; cin >> l;
            cout << "Masukkan tinggi: "; cin >> t;
            volume = p * l * t;
            cout << "Volume Balok = " << volume << endl;
            break;

        case 2: 
            cout << "Masukkan jari-jari: "; cin >> r;
            volume = (4.0 / 3.0) * M_PI * pow(r, 3);
            cout << "Volume Bola = " << volume << endl;
            break;

        case 3: 
            cout << "Masukkan jari-jari alas: "; cin >> r;
            cout << "Masukkan tinggi: "; cin >> t;
            volume = (1.0 / 3.0) * M_PI * pow(r, 2) * t;
            cout << "Volume Kerucut = " << volume << endl;
            break;

        case 4: 
            cout << "Masukkan jari-jari alas: "; cin >> r;
            cout << "Masukkan tinggi: "; cin >> t;
            volume = M_PI * pow(r, 2) * t;
            cout << "Volume Silinder = " << volume << endl;
            break;

        case 5: 
            cout << "Masukkan alas segitiga: "; cin >> a;
            cout << "Masukkan tinggi segitiga: "; cin >> tinggi;
            cout << "Masukkan tinggi limas: "; cin >> t;
            volume = (1.0 / 3.0) * (0.5 * a * tinggi) * t;
            cout << "Volume Limas Segitiga = " << volume << endl;
            break;

        case 0:
            cout << "Terima kasih, program selesai.\n";
            break;

        default:
            cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != 0);

    return 0;
}


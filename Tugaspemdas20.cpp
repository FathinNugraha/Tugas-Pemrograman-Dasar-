#include <iostream>
using namespace std;

int main() {
    int i, n1, n2;

    cout << "Masukkan jumlah array pertama: ";
    cin >> n1;
    int A[n1];
    cout << "Masukkan array pertama:\n";
    for (i = 0; i < n1; i++) {
        cin >> A[i];
    }

    cout << "Masukkan jumlah array kedua: ";
    cin >> n2;
    int B[n2];
    cout << "Masukkan array kedua:\n";
    for (i = 0; i < n2; i++) {
        cin >> B[i];
    }

    int C[n1 + n2];
    for (i = 0; i < n1; i++) {
        C[i] = A[i];
    }
    for (i = 0; i < n2; i++) {
        C[n1 + i] = B[i];
    }

    cout << "\nhasil penggabungan:\n";
    for (i = 0; i < n1 + n2; i++) {
        cout << C[i] << " ";
    }

    return 0;
}


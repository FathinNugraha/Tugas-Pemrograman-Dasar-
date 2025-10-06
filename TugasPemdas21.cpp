#include <iostream>
using namespace std;

int main() {
    int n, i, j, temp;

    cout << "Masukkan jumlah array: ";
    cin >> n;

    int data[n];
    cout << "Masukkan array:\n";
    for (i = 0; i < n; i++) {
        cin >> data[i];
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (data[i] > data[j]) {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }

    cout << "\nData setelah diurutkan :\n";
    for (i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    return 0;
}


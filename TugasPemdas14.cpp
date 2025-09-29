#include <iostream>
using namespace std;

int main() {
    int n = 4;

    cout << "\nSegitiga Siku-siku (pojok kiri atas):\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\nSegitiga Siku-siku (pojok kiri bawah):\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\nSegitiga Siku-siku (pojok kanan atas):\n";
    for (int i = n; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) cout << "  ";
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << endl;
    }

    cout << "\nSegitiga Siku-siku (pojok kanan bawah):\n";
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) cout << "  ";
        for (int j = 1; j <= i; j++) cout << "* ";
        cout << endl;
    }

    cout << "\nSegitiga Sama Kaki:\n";
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) cout << " ";
        for (int j = 1; j <= (2*i - 1); j++) cout << "*";
        cout << endl;
    }

    return 0;
}


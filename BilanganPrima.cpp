#include <iostream>

using namespace std;

int main() {
    int batas;
    cout << "Masukkan batas: ";
    cin >> batas;

    cout << "Bilangan Ganjil: ";
    int jumlahGanjil = 0;
    for (int i = 1; i <= batas; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            jumlahGanjil += i;
        }
    }
    cout << "\nJumlah bilangan ganjil: " << jumlahGanjil << endl;

    cout << "Faktor-faktor bilangan ganjil:" << endl;
    for (int i = 1; i <= batas; i++) {
        if (i % 2 != 0) {
            cout << i << ": ";
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    cout << j << " ";
                }
            }
            cout << endl;
        }
    }
    cout << endl;

    cout << "Bilangan Genap: ";
    int jumlahGenap = 0;
    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            jumlahGenap += i;
        }
    }
    cout << "\nJumlah bilangan genap: " << jumlahGenap << endl;

    cout << "Faktor-faktor bilangan genap:" << endl;
    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) {
            cout << i << ": ";
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    cout << j << " ";
                }
            }
            cout << endl;
        }
    }
    cout << endl;

    cout << "Bilangan Prima: ";
    int jumlahPrima = 0;
    for (int i = 2; i <= batas; i++) {
        int faktor = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                faktor++;
            }
        }
        if (faktor == 2) {
            cout << i << " ";
            jumlahPrima += i;
        }
    }
    cout << "\nJumlah bilangan prima: " << jumlahPrima << endl;

    cout << "Faktor-faktor bilangan prima:" << endl;
    for (int i = 2; i <= batas; i++) {
        int faktor = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                faktor++;
            }
        }
        if (faktor == 2) {
            cout << i << ": ";
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    cout << j << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}

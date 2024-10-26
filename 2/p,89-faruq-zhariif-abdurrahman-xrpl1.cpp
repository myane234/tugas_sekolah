#include <iostream>
using namespace std;

int main() {
    int tinggi;

    cout << "Masukkan jumlah baris maksimum: ";
    cin >> tinggi;

    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl; 
    }

    for (int i = tinggi; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

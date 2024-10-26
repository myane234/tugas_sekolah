#include <iostream>
using namespace std;

int main() {
    int pilihan, totalPaket = 0, banyak, hasil = 0;
    char pilihanPaket, yesNo;
    int diskon = 10;
    int x = 0;
    int totalSeluruhPesanan[10];

    do {
        cout<<"Selamat datang di Warteg rumah Sederhana\n";
        cout << "List Menu & Paket:\n";
        cout << "1. Ayam Goreng\n";
        cout << "2. Nasi Goreng\n";
        cout << "3. Masakan Ikan\n";
        cout << "Masukkan nomor menu yang dipilih: ";
        cin >> pilihan;

        switch(pilihan) {
            case 1:
                cout << "Pilih Paket Ayam Goreng:\n";
                cout << "A. Ayam goreng sambal bawang - Rp13.000\n";
                cout << "B. Ayam goreng kremes - Rp15.000\n";
                cout << "C. Ayam goreng extra - Rp18.000\n";
                cout << "Masukkan huruf paket yang dipilih: ";
                cin >> pilihanPaket;

                if(pilihanPaket == 'A' || pilihanPaket == 'a') {
                    totalPaket = 13000;
                } else if(pilihanPaket == 'B' || pilihanPaket == 'b') {
                    totalPaket = 15000;
                } else if(pilihanPaket == 'C' || pilihanPaket == 'c') {
                    totalPaket = 18000;
                } else {
                    cout << "Paket tidak tersedia!\n";
                    totalPaket = 0;
                }
                break;

            case 2:
                cout << "Pilih Paket Nasi Goreng:\n";
                cout << "A. Nasi goreng biasa - Rp12.000\n";
                cout << "B. Nasi goreng spesial - Rp17.000\n";
                cout << "C. Nasi goreng seafood - Rp20.000\n";
                cout << "Masukkan huruf paket yang dipilih: ";
                cin >> pilihanPaket;

                if(pilihanPaket == 'A' || pilihanPaket == 'a') {
                    totalPaket = 12000;
                } else if(pilihanPaket == 'B' || pilihanPaket == 'b') {
                    totalPaket = 17000;
                } else if(pilihanPaket == 'C' || pilihanPaket == 'c') {
                    totalPaket = 20000;
                } else {
                    cout << "Paket tidak tersedia!\n";
                    totalPaket = 0;
                }
                break;

            case 3:
                cout << "Pilih Paket Masakan Ikan:\n";
                cout << "A. Ikan bakar kecap - Rp25.000\n";
                cout << "B. Ikan goreng sambal - Rp22.000\n";
                cout << "C. Ikan asam manis - Rp28.000\n";
                cout << "Masukkan huruf paket yang dipilih: ";
                cin >> pilihanPaket;

                if(pilihanPaket == 'A' || pilihanPaket == 'a') {
                    totalPaket = 25000;
                } else if(pilihanPaket == 'B' || pilihanPaket == 'b') {
                    totalPaket = 22000;
                } else if(pilihanPaket == 'C' || pilihanPaket == 'c') {
                    totalPaket = 28000;
                } else {
                    cout << "Paket tidak tersedia!\n";
                    totalPaket = 0;
                }
                break;

            default:
                cout << "Menu tidak tersedia!\n";
                totalPaket = 0;
                break;
        }

    
        if (totalPaket > 0) {
            cout << "Masukkan jumlah pesanan: ";
            cin >> banyak;

            totalSeluruhPesanan[x] = totalPaket * banyak;
            cout << "Total untuk pesanan ini: Rp" << totalSeluruhPesanan[x] << endl;
            x++;

            cout << "Apakah ingin menambah pesanan? (Y/N): ";
            cin >> yesNo;
        } else {
            cout << "Pesanan tidak valid, coba lagi.\n";
            yesNo = 'Y';
        }

    } while (yesNo == 'Y' || yesNo == 'y');

    for(int i = 0; i < x; i++) {
        hasil += totalSeluruhPesanan[i];
    }

    int diskonTotal = hasil * diskon / 100;
    hasil -= diskonTotal;

    cout << "Total Bayar setelah diskon 10%: Rp" << hasil << endl;

    return 0;
}

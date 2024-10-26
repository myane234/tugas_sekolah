#include <iostream>
using namespace std;

int main() {
    int jenis, lama, total, tambahan, tarif_awal, jam_berikutnya;
    
    //input
    cout << "Program Tarif Parkir Kendaraan\n";
    cout << "1. Mobil\t";
    cout << "2. Motor\n\n";
    
    cout << "Masukkan Jenis Kendaraan (1 untuk Mobil, 2 untuk Motor): ";
    cin >> jenis;

//penentuan tarif
    switch (jenis) {
        case 1: 
            tarif_awal = 5000;   
            tambahan = 3000;     
            break;
        case 2: 
            tarif_awal = 3000;  
            tambahan = 1500;     
            break;
        default:
            cout << "Jenis kendaraan tidak valid." << endl;
            return 1;  
    }

    cout << "Masukkan Lama Parkir (dalam jam): ";
    cin >> lama;
//menghitung total tarif
    if (lama <= 2) {
        total = tarif_awal;
    } else { //jika lebih 2 jam
        jam_berikutnya = (lama - 2) * tambahan;
        total = tarif_awal + jam_berikutnya;
    }

//output
    cout << "-----------------------------------------------\n";
    cout << "2 Jam pertama: Rp " << tarif_awal << endl;
    if (lama > 2) {
        cout << "Jam berikutnya: Rp " << jam_berikutnya << endl;
    }
    cout << "Total bayar: Rp " << total << endl;

    return 0;
}

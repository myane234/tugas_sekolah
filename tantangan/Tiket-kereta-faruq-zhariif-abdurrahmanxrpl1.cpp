#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    int choice, jumlahEkonomi= 0, jumlahBisnis= 0, jumlahEksekutif= 0;
    char lanjut;
    do {
    cout<<"===========Daftar Tiket Kereta Api==============\n";
    cout<<"1. Ekonomi\n";
    cout<<"2. Bisnis\n";
    cout<<"3. Eksekutif\n";
    cout<<"4. Selesai Memesan\n";
    cout<<"------------------------------------------------"<<endl;
    cout<<"Masukkan pilihan Anda: ";
    cin>>choice;

    int jumlah;
    switch(choice) {
        case 1:
        cout<<"Harga Tiket Ekonomi = Rp.150.000/org"<<endl;
        cout<<"Masukkan jumlah: ";
        cin>>jumlah;
        jumlahEkonomi += jumlah;
        cout<<"Kamu memesan: "<<jumlah<<" Tiket Ekonomi"<<endl;
        break;
        case 2:
        cout<<"Harga tiket Bisnis = Rp.300.000/org"<<endl;
        cout<<"Masukkan Jumlah: ";
        cin>>jumlah;
        jumlahBisnis += jumlah;
        cout<<"Kamu memesan: "<<jumlah<<" Tiket Bisnis"<<endl;
        break;
        case 3:
        cout<<"Harga Tiket Eksekutif = Rp.500.000/org"<<endl;
        cout<<"Masukkan Jumlah: ";
        cin>>jumlah;
        jumlahEksekutif += jumlah;
        cout<<"Kamu memesan: "<<jumlah<<" Tiket Eksekutif"<<endl;
        break;
        case 4:
        cout<<"Selesai memesan\n";
        break;
        default :
        cout<<"Pilihan mu salah";
    }

    if( choice != 4) {
        cout<<"Apakah anda ingin memesan tiket lagi(y/n)";
        cin>>lanjut;
    } else {
        lanjut = 'n';
    } 
    } while(lanjut == 'y' || lanjut== 'Y');

    cout<<"Ringkasan pembelian"<<endl;
    if(jumlahEkonomi > 0) {
        cout<<"Jumlah tiket ekonomi: "<<jumlahEkonomi<< " Rp."<< jumlahEkonomi * 150000<<endl;
    }
    if(jumlahBisnis > 0) {
        cout<<"Jumlah tiket bisnis: "<<jumlahBisnis<< " Rp."<< jumlahBisnis * 300000<<endl;
    }
    if(jumlahEksekutif > 0) {
        cout<<"Jumlah tiket eksekutif: "<<jumlahEksekutif<< " Rp."<< jumlahEksekutif * 500000<<endl;
    }

    int totalharga = (jumlahEkonomi * 150000) + (jumlahBisnis * 300000) + (jumlahEksekutif * 500000);
    cout<<"Total Harga Rp. "<<totalharga<<endl;

    getch();
    return 0;
}

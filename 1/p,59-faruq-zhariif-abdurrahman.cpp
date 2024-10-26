#include <iostream>
using namespace std;

int main ()
{
	//inisialisasi variabel
	int a=60;
	int b=20;
	int tambah, kurang, kali;
	float bagi, mod;
	
	//proses
	tambah= a+ b;
	kurang= a-b;
	kali= a*b;
	bagi= a/b;
	mod= a%b;
	
	//Output
	cout<<"Hasil Penjumlahan : "<<tambah<<endl;
	cout<<"Hasil Pengurangan : "<<kurang<<endl;
	cout<<"Hasil Perkalian : "<<kali<<endl;
	cout<<"Hasil Pembagian : "<<bagi<<endl;
	cout<<"Hasil sisa bagi : "<<mod;
}

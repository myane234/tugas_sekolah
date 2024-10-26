#include <iostream>

using namespace std;

#define PI 3.14
#define nama "Myane(faruq)"

int main ()
{
	float LuasLingkaran, Jari2;
	cout <<"\n === Program Luas Lingkaran === \n\n";
	
	cout <<"Masukkan nilai Jari-jari : "; cin>>Jari2;
	LuasLingkaran = PI * Jari2 * Jari2;
	
	cout <<"Luas Lingkaran : " <<LuasLingkaran<<endl;
	
	cout <<"\n\nDibuat oleh : "<<nama;
	
	return 0;
}

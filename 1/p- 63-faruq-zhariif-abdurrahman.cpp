#include <iostream>
using namespace std;
int main () {
	int usia = 0;
	
	cout<<"Masukan usia anda: "; cin>>usia;
	cout<<"Usianya Sekarang : "<< (usia > 16 ? "TUAA" : "masih muda")<<" "<< endl;
	return 0;
}

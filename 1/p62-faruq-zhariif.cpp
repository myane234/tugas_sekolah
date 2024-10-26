#include <iostream>
//contoh program untuk operasi bitwise AND
using namespace std;
int main () {
	int a,b, c;
	//Input bilangan decimal (basis 10)
	cout<<"input Nilai a = "; cin>>a;
	cout<<"input Nilai b = "; cin>>b;
	c = a & b;
	cout<<"Hasil dari "<<a<<" & "<<b<<" = "<<c<<endl;
	return 0;
}

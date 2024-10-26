#include <iostream>
using namespace std;

int main ()
{
	int a = 10;
	// cek kondisi boolean if ( a == 10 )
{// jika kondisi benar 
cout << "nilai a adalah 10" <<  endl; }
if ( a == 20 )
{
	// jika kondisi if benar
	cout << "nilai a adalah 20" << endl; }
	else if ( a == 30 )
{
	// jika kondisi else if benar
	cout << "nilai a adalah 30" << endl; }
	else {
		// jika tidak satupun    kondisi bernilai benar
		cout << "nilai a tidak ada yang sama " << endl;
}
cout << "nilai a yang tepat adalah : " << a << endl;
return 0;
}

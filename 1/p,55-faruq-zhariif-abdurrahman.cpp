#include <iostream>
using namespace std;

int main ()
{
	int a, b;                  // a:?, b:?
	a = 1;                    // a:1, b:?
	b = 2;                   // a:1, b:2
	a = b;                   // a:2, b:2
	b = 4;                 // a:2, b:4
	
	cout <<"a:";
	cout << a;
	cout << " b:";
	cout << b;
}

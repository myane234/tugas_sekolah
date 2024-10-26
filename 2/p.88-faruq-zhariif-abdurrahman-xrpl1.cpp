#include<iostream>
using namespace std;

int main() {
    int a = 10;
    //eksekusi do looping
    LOOP:do {
        if( a ==5 )
        {
            a = a + 1;
            goto LOOP;
        }
        cout<< "Nilai a adalah: "<< a <<endl;
        a = a + 1;
    } while( a < 20 );

}
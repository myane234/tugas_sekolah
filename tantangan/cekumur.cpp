#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main() {
    int umur = 14;

    if(umur<=18) {
        if(umur<=10) {
            cout<<"Anak Anak\n";
        } else {
            cout<<"Remaja\n"; 
        }
    } else {
        cout<<"Bukan anak anak atau remaja"<<endl;
    }

    getch();
}
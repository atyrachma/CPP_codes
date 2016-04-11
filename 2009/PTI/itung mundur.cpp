//Menghitung mundur
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int n;
    cout << "Masukkan angka awal : ";
    cin >> n;
    while (n>0) {
          cout << n << ", ";
          --n;
    }
    cout << "FIRE!\n";
    getch();
    return 0;
}       

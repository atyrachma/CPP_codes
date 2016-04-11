//Menghitung jumlah deret angka
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int bawah, atas;
    int total=0;
    
    cout << "Masukkan bilangan batas bawah : "; cin >> bawah;
    cout << "Masukkan bilangan batas atas : "; cin >> atas;
    
    if ((bawah >=0) && (atas >=0) && (bawah <= atas))
    {
               while (bawah <= atas)
               {
                     total += bawah;
                     bawah ++;
               }
               cout << "Total Jumlah Deret Angka = " << total;
    }
    else
               cout << "Data Anda tidak valid";
               
               getch();
               return 0;
}

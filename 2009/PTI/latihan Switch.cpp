#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
    int kode;
    cout << "Perasaan Anda Hari Ini\n";
    cout << "1=BAHAGIA 2=SENANG 3=BIASA SAJA \n";
    cout << "4=SEDIH 5=KESAL 6=MARAH \n\n";
    cout << "Perasaan Anda [1.....6]: "; cin >> kode;
    
    //proses seleksi
    switch (kode)
    {
           case 1: cout << "BAHAGIA";
                   break;
           case 2: cout << "SENANG";
                   break;
           case 3: cout << "BIASA SAJA";
                   break;
           case 4: cout << "SEDIH";
                   break;
           case 5: cout << "KESAL";
                   break;
           case 6: cout << "MARAH";
                   break;
           default: cout << "Maaf kode Anda salah";
                    break;
    }
    getch();
    return 0;
}
                    

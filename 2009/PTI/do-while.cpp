#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
    int batas = 20;
    int nomor;
    nomor = 11;
    
    do 
    {
          cout << nomor << "\n";
          nomor ++;
    }
    while (nomor <= batas);
    
    getch();
    return 0;
}

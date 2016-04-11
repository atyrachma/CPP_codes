#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int naik;
    int turun;
    
    for (naik =1; naik <= 5; naik ++)
    {
        cout << "\n" << naik << " ";
        for (turun =6; (turun-naik) >= 1; turun --) {
        cout << "*" ;
        }
    }
    
    getch();
    return 0;
}

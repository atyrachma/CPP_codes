#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int data;
    
    for (data =1; data <= 23; data ++)
    {
        if (data %2 != 1)
        continue;
        cout << data << " ";
    }
    
    getch();
    return 0;
}

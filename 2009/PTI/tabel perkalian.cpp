//nama : Satrio Agung Nugroho (16308134)
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int A1, A2, A3,x;
    cout <<"\t\t\t\tTABEL PERKALIAN\n";
    cout <<"\t\t\t\t===============\n\n";
    cout <<"Pililah tabel berdasarkan bentuk aplikasi dari perulaangan\n";
    cout <<"1. For        2. While\n";
    cout <<"Masukan pilahan anda :"; cin>>x;
    cout <<"\n";
    
    switch (x)
    {
           case 1: cout << "\t\t\t\tPerulangann For\n";
           cout << "\t\t\t\t---------------\n";
    cout <<"    "<<"X"<<"     ";
    for (A1=1; A1<=10; A1++)
    {
        cout << A1<<"     ";
        }
        cout <<"\n\n";
        for (A1=1; A1<=10; A1++)
        { 
            if (A1<10)
            cout <<"    "<< A1 <<"     ";
            else
            cout <<"    "<< A1 <<"    ";
            for (A2=1; A2<=10; A2++)
            {
                A3=A1*A2;
                if (A3<10)
                cout << A3 <<"     ";
                else
                cout << A3 <<"    ";
                
            }
            cout <<"\n\n";
            }
            break;
            
            case 2: cout << "\t\t\t\tPerulangan while\n";
            cout << "\t\t\t\t----------------\n";
            cout <<"    "<<"X"<<"     ";      
            A1=1;
             while (A1<=10)

    {
        cout << A1<<"     ";
        A1++;
        }
        cout <<"\n\n";
        A1=1;
        while (A1<=10)
        { 
            if (A1<10)
            cout <<"    "<< A1 <<"     ";
            else
            cout <<"    "<< A1 <<"    ";
            A2=1;
            while(A2<=10)
            {
                A3=A1*A2;
                if (A3<10)
                cout << A3 <<"     ";
                else
                cout << A3 <<"    ";
                A2++;
                
            }
            cout <<"\n\n";
            A1++;
            }
            break;
            default: cout << "Maaf kode Anda salah";
break;
            }
        getch ();
        return 0;
}

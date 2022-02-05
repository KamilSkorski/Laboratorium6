#include <iostream>
using namespace std;
int main()
{
    int n;
    float* tab;
    float suma=0, srednia;
    cout << "Podaj wielkosc tablicy: ", cin >> n;
    if (n > 0)
    {
        tab = new float[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Podaj wartosc " << i + 1 << " elementu tablicy : ", cin >> tab[i];
            suma += tab[i];
        }
        srednia = suma / n;
        cout << "Srednia liczb: " << srednia << endl;
        for (int i = 0; i < n; i++)
        {
            if (tab[i] > srednia)
                cout << tab[i] << endl;
        }
    }
    else cout << "Podano nieprawidlowa wartosc." << endl;
    }



#include <iostream>
using namespace std;

int Potega(int* l, int *p, int *w)
{
    for (int i = 0; i < ( * p); i++)
    {
        *w *= *l;
        
    }
    return *w;
}

int main()
{
    int wynik=1, *w;
    w = &wynik;
    int a, b,*x,*y;
    cout << "Podaj liczbe: ", cin >> a;
    cout << "Podaj stopien potegi: ", cin >> b;
    x = &a;
    y = &b;
    cout << Potega(x, y, w);
}

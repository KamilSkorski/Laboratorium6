#include <iostream>
using namespace std;

void Powt(char* z, int* pow)
{
    for (int i = 0; i < *pow; i++)
    {
        cout << *z<<endl;
    }
    (*pow) --;
}

int main()
{
    char tab[1],*z;
    int a,*p;
    cout << "Podaj znak: ", cin >> tab[0];
    cout << "Podaj liczbe powtorzen: ", cin >> a;
    p = &a;
    z = &tab[0];
    Powt(z, p);
    cout << *p;
}


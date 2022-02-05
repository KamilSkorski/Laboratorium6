#include <iostream>
using namespace std;
int main()
{
    float x = 10, w, s;
    float* b;
    float* c;
    float* d;
    b = &x;
    c = &w;
    d = &s;
    cout << "Podaj zmienna w: ",cin>>w;
    cout << "Podaj zmienna s: ", cin >> s;
    cout << "Adres zmiennej x: " << b << endl;
    cout << "Adres zmiennej w: " << c << endl;
    cout << "Wartosc zmiennej w: " << *c << endl;
    cout <<"Roznica "<<x<<" - "<<w<<" = "<< (*b) - (*c)<<endl;
    cout << "Srednia liczb " << x << ", " << w << ", " << s << " = " << ((*b) + (*c) + (*d)) / 3;

}


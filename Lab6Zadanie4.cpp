#include <iostream>
using namespace std;
void Kwadrat(int* liczba)
{
    
        *liczba*= *liczba;
        cout << *liczba;
}
int main()
{
    int* a, n;
    cout << "Podaj liczbe: ", cin >> n;
    a = &n;
    cout << "Kwadrat liczby " << n << " = ";
    Kwadrat(a);

}



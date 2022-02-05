#include <iostream>
using namespace std;

int WskaznikLiczb(int* x, int* y)
{
    if (*x < *y)
        return *x;
    else return *y;

}
int WartLiczb(int* a, int* b)
{
    int c;
    if (*a < *b)
    {
        c = *a;
    }
    else c=*b;
    return c;
}
int main()
{
    int a, b, * x, * y;
    cout << "Podaj pierwsza liczbe: ", cin >> a;
    cout << "Podaj druga liczbe: ", cin >> b;
    x = &a;
    y = &b;
    cout << WskaznikLiczb(x, y)<<endl;
    cout << WartLiczb(x, y);
}

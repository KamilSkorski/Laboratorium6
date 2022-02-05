#include <iostream>
using namespace std;
void Zamiana(int* a, int*b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
	cout << "Pierwsza liczba: " << *a << endl;
	cout << "Droga liczba: " << *b;
}
int main()
{
	int a, b;
	cout << "Podaj pierwsza liczbe: ", cin >> a;
	cout << "Podaj druga liczbe: ", cin >> b;
	Zamiana(&a, &b);
}
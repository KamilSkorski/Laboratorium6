#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int tab[5], a = 0;
		int* c;
		int* b;
		for (int i = 0; i < 5; i++)
		{
			tab[i] = i;
	    }
		c = &tab[0];
		b = &tab[3];
		cout << "Adres pierwszego elementu: " << c << endl;
		cout << "Adres czwartego elementu: " << b << endl;
		
		int n,p, k, s;

		cout << "Podaj rozmiar tablicy: ", cin >> n;
		cout << "Podaj poczatek tablicy: ", cin >> p;
		cout << "Podaj koniec tablicy: ", cin >> k;
		
		if (n > 0)
		{
			if (p < k)
			{
				int* tabela = new int[n];
				for (int i = 0; i < n; i++)
				{
					if (p < 0)
					{
                    tabela[i] = rand() % (-p + k + 1) + p ;
					}
					if (p > 0)
					{
                    tabela[i] = rand() % (k - p + 1) + p;
					}					
					if (p == 0)
					{
                    tabela[i] = rand() % (p + k + 1);
					}
					
					cout <<"Wartosc elementu tablicy: " << tabela[i] <<" "<< "Adres: " << &tabela[i] << endl;
				}
			}
		}

		
}

#include <iostream>
using namespace std;
int main()
{
	char volba;
	srand(time(NULL));
	cout << "\nM-Mocnina\nS-Ciferny soucet\nK-Konec\nZvolte si jednu možnost z menu: ";
	cin >> volba;
	while (volba!='K')
	{
		switch (volba)
		{
		case 'M':
		{
			cout << "\nZvolili jste moznost M";
			double a = 1 + (10 - 1) * (double)rand() / (RAND_MAX + 1);
			int n = -5 + rand() % (5 - (-5) + 1);
			n = -3;
			a = 5;
			double mocnina=1;
			if (n < 0)
			{
				for (int i = n; n < 0; n++)
				{
					mocnina *= 1 / a;
				}
			}
			else 
			{
				for (int i = 0; i < n; i++)
				{
					mocnina *= a;
				}
			}
			cout << "\nMocnina je: " << mocnina;
		}break;
		case 'S':
		{
			cout << "\nZvolili jste si moznost S";
			int n;
			cout << "\nZadejte nezaporne cislo: ";
			cin >> n;
			int cifernySoucet = 0;
			while (n>0)
			{
				cifernySoucet += n % 10;
				n /= 10;
			}
			cout << "\nCiferny soucet je: " << cifernySoucet;
		}break;
		default:
		{
			cout << "Spatna moznost";
		}break;
		}
		cout << "\n\nM-Mocnina\nS-Ciferny soucet\nK-Konec\nZvolte si jednu moznost z menu: ";
		cin >> volba;
	}
}
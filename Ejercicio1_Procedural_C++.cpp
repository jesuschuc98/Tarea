#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int numero;

	cout << "Introduce un numero: ";
	cin >> numero;

	if (numero % 2 == 0)
	{
		cout << numero << " es par." << endl;
	}
	else
	{
		cout << numero << " es impar." << endl;
	}

	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	unsigned int eingabe_array[9] = { 0 };
	unsigned int unterschiedliche_zahlen = 0;
	for (int i = 0; i < 9; i++)
	{
		int eingabe;
		do
		{
			cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
			cin >> eingabe;
		} while (eingabe < 1 || eingabe > 6);
		eingabe_array[i] = eingabe;
	}

	for (int i = 0; i < 9; i++)
	{
		bool neue_zahl = false;
		for (int j = 0; j < i && neue_zahl == false; j++)
		{
			neue_zahl = eingabe_array[i] == eingabe_array[j];
		}
		if (neue_zahl == false)
		{
			unterschiedliche_zahlen++;
		}
	}

	cout << "In der Eingabe kamen " << unterschiedliche_zahlen << " unterschiedliche Zahlen vor." << endl;

	system("PAUSE");
	return 0;
}
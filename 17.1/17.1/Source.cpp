#include <iostream>
using namespace std;

void AfisareMesaj()
{
	cout << "Hello World!" << endl;
}
void PrezentareaMea(string nume)
{
	cout << "Buna ziua, numele meu este " << nume << endl;
}
int sumaDouaNumere(int primulNr, int alDoileaNr)
{
	int suma = primulNr + alDoileaNr;
	return suma;
}
int minimDouaNumere(int primulNr, int alDoileaNr)
{
	int minim;
	if (primulNr < alDoileaNr)
	{
		minim = primulNr;
	}
	else
	{
		minim = alDoileaNr;
	}
	return minim;
}
int produsFactorial(int numar)
{
	int rezultat = 1;
	for (int i = 1;i <= numar;i++)
	{
		rezultat = rezultat * i;
	}
	return rezultat;
}
void main()
{
	AfisareMesaj();
	PrezentareaMea("Costi");
	PrezentareaMea("Alex");
	string nume = "Gabi";
	PrezentareaMea(nume);
	int c = sumaDouaNumere(2, 21);
	cout << c;
	int d = 5;
	int e = sumaDouaNumere(c, d);
	cout << endl;
	cout << e;
	cout << endl;

	//minimul dintre doua numere;
	int minim;
	minim = minimDouaNumere(1, 5);
	cout << minim << endl;

	//suma dintre minimul primelor doua cu minimul celorlate doua;
	int rezultat;
	rezultat = sumaDouaNumere(minimDouaNumere(10, 20), minimDouaNumere(25, 50));
	cout << rezultat << endl;

	//produsul factorial
	int rezultatProdusFactorial;
	rezultatProdusFactorial = produsFactorial(10);
	cout << rezultatProdusFactorial << endl;
	int rezultat2;
	int numar1 = 3;
	int numar2 = 6;
	rezultat2 = produsFactorial(minimDouaNumere(numar1, numar2));
	cout << rezultat2 << endl;
















}
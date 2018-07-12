#include <iostream>
#include <conio.h>
using namespace std;

void LuasPersegi()
{
	int panjang, lebar;
	cout << "Masukan Panjang	: ";
	cin >> panjang;
	cout << "Masukan Lebar		: ";
	cin >> lebar;
	cout <<" Luas Persegi		: "<<panjang*lebar;
	
}

int main()
{
	LuasPersegi();
	getch();
}

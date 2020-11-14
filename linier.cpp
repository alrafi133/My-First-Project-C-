#include "iostream"
#include "stdio.h"
#include "conio.h"

using namespace std;

int main(int argc, char const *argv[])
{
	int data[3] = {46, 23, 99};
	int cari, x;
	int ketemu = 0;

	cout << "inputkan data yang ingin cari = "; cin>>cari;

	for (int i = 0; i < 3; i++)
	{
		if (data[i] == cari)
		{
			ketemu = 1;
			x = 1;
			break;
		}
		if (ketemu == 1)
		{
			cout << "Data Tersedia";
			cout << "Data Terletak di X ke -";
		}
		else
		{
			cout << "Data Tidak Tersedia!";
		}
		getch();	
	}
	return 0;
}
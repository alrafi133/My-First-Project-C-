#include "iostream"
#include "stdio.h"
#include "conio.h"

using namespace std;

int main(int argc, char const *argv[])
{
	int a, k, c, d, g;
	k = 4;
	int b[4];

	cout << "\t\tSelection Data" << endl << endl;
	cout << "\t\tUrutan Data Dari Besar ke Kecil" << endl;

	for (int a = 0; a < k; a++)
	{
		cout << "Masukkan Nilai " << a+1 << " : "; cin>>b[a];
	}

	for (int a = 0; a < k-1; a++)
	{
		c = a;

		for (int d = a+1; d < k; d++)
		{
			if (b[c] < b[d])
			{
				c = d;
			}
		}

		g = b[c];
		b[c] = b[a];
		b[a] = g;
	}

	cout << "\n Setelah Diurutkan Akan Menjadi : \n";
	for (int a = 0; a < k; a++)
	{
		cout << b[a] << " \n";
	}
	return 0;
}
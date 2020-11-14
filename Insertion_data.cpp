#include "iostream"
#include "conio.h"

using namespace std;

int main(int argc, char const *argv[])
{
	int x, a[100], i, t, j, k;
	cout << "Insertion Sort - DESC" <<endl <<endl;
	cout << "Masukkan Banyak Bilangan = ";cin >>x;

	for (int i = 1; i <= x; i++)
	{
		cout << "\nBilangan Ke-" << i << " : "; cin>>a[i];
	}

	cout << "\n\n Data Sebelum di Urutkan : ";

	for (int i = 1; i <= x; i++)
	{
		cout << " "<< a[i];
	}
	cout<<endl;

	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
		cout << " \n # " << i << " : ";
		for (int k = 1; k <= i; k++)
		{
			cout << " "<<a[k];
		}
	}
	cout << "\n\nData Setelah Diurutkan Secara Descending: ";
	for (int i = 1; i <= x; i++)
	{
		cout << " "<<a[i];
	}

	getch();

	return 0;
}
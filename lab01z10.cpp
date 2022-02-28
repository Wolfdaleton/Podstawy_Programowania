#include<iostream>
using namespace std;

int main()
{
unsigned int n;
int max=0,i, z;
cout<<"Wprowadź rozmiar tablicy"<<'\t' <<endl;
	while(!(cin>>n))
		{
		cout<<"Błąd, podaj liczbę!" <<'\t';
		cin.clear();
		cin.ignore(123, '\n');
		}


int T[n];

	for (int i =0;i<n;i++)
	{
	
	     	cout<<"Wprowadź " <<(i+1) <<" element w tablicy";
		cin>> T[i];
		if (T[i]>max)
			max=T[i];
	}
cout<<"Adres wartości największej to: "<<&max;
}

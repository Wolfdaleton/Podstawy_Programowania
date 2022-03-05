#include<iostream>
using namespace std;

int main()

	{
		unsigned int n;
		cout<<"Wpisz rozmiar tablicy";
		while(!(cin>>n))
		{
			cout<<"Błąd, podaj liczbę!" <<'\t';
			cin.clear();
			cin.ignore(123, '\n');
		}
		int i; 
		float T[n];
		T[0]=0;
		T[1]=1;

		if(i==1)
			cout<<T[0];
		else if (i==2)
			cout<<T[1];
		else
		{
			cout<< T[0]<<'\t' <<T[1]<<'\t';
			for (i=2; i<(n); i++)
			{
				T[i]=T[i-2]+T[i-1];
				cout<< T[i] <<'\t';
		
			}
		}
	}

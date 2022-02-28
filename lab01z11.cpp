#include<iostream>
using namespace std;

int main()
{
unsigned int n;
int avg=0,i, temp=0;
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
		if(T[i]%2==1 && T[i]%3==0)
		{
			temp++;
			avg+=T[i];
		}

	}
cout<<"Wartość średniej to: "<<avg/temp;
}

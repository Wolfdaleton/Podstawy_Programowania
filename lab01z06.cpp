#include<iostream>
using namespace std;

int main ()
{
	int n, sum=0, i;
	while(!(cin>>n))
		{
		cout<<"Błąd, podaj liczbę!" <<'\t';
		cin.clear();
		cin.ignore(123, '\n');
		}

	int T[n];
	T[0]=0;
	T[1]=1;
	if(n==1||n==0)
		sum=0;
	else{
	for(i=2; i<(n+2); i++)
	{
		T[i]=T[i-2]+T[i-1];
		if (T[i]%2==0)
			sum+=T[i];
	
	}
	}
	cout<<"Suma parzystych wyrazów to: " << sum;
}

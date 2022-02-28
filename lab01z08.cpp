#include<iostream>
int main()
{
	int i, n, factorial=1;
	std:: cin>>n;
	int T[n];
	T[0]=1;
	T[1]=1;
	if(n==0)
		factorial=1;
	else
	{	
		for(i=0; i<=(n-1); i++)
		{

			factorial*=T[i];

			T[i+1]=T[i]+1;
		}
	}
	std:: cout<< factorial;
	
}


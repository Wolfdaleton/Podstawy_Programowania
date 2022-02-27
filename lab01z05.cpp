#include<iostream>
using namespace std;

int main()
	{
	int unsigned n;
	int i=0;
	int T[n];
	T[0]=0;
	T[1]=1;
    	while(!(cin>>n))
    	{

        	cout << "Błąd podaj liczbę";
        	cin.clear();
       		cin.ignore(123, '\n');
  	}

	int sum=T[0]+T[1];

	if(n <=0)
		cout<<"0";
	for(i=2; i<=(n-1); i++)
	
			{
				T[i]=T[i-2]+T[i-1];
				sum+=T[i];
				
			}
		
	cout<<"twoja suma to:" <<sum;	
	return 0;
	}



#include<iostream>
using namespace std;

int main()
	{
		int i,n;
		if(!(cin >> n))
        		throw runtime_error("failed to parse an int");
		int T[n];
		    for(i=0; i<n; i++)
		    {
			    if(i%2==0)
				    T[i]=2;
			    else if(i%2==1)
				    T[i]=0;
		    cout<< T[i] <<'\t';
		    }
	}

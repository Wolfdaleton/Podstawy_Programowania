#include<iostream>
using namespace std;

int main()
	{
		int i,n;
		//krótszy sposób na wyrzucenie błędu przy nie podaniu liczby
		if(!(cin >> n))
        		throw runtime_error("failed to parse an int");
		int T[n];
		    for(i=0; i<n; i++)
		    {
			    if(i==0)
				    T[i]=-1;
			    else if(i%2==0)
				    T[i]=2*i;
			    else if(i%2==1)
				    T[i]=i-1;
		    cout<< T[i] <<'\t';
		    }
	}

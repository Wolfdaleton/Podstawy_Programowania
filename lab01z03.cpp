#include<iostream>
#include<math.h>
using namespace std;

int main ()
{
    int i=0;
    int n;
    cout<<"Wpisz rozmiar tablicy";
    cin>>n;
    int temp=-5;
    int arr[n];
    do {
            arr[i]=temp;
	    cout<<arr[i];
            i++;
            temp++;
        }
            while (i<n);

}

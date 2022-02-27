#include<iostream> 
using namespace std;
int main()
{
    int a=0, b=0, c=0;
    cout<<"Wpisz pierwszą liczbę"<<endl;
    while(!(cin>>a))
    {

        cout << "Błąd podaj liczbę";
        cin.clear();
        cin.ignore(123, '\n');
    }
    cout << "Wpisz B liczbę i zatwierdź enterem"<<endl;
    while(!(cin>>b))
    {

        cout << "Błąd podaj liczbę";
        cin.clear();
        cin.ignore(123, '\n');
    }
    cout << "Wpisz C liczbę i zatwierdź enterem"<<endl;
    while(!(cin>>c))
    {

        cout << "Błąd podaj liczbę";
        cin.clear();
        cin.ignore(123, '\n');
    }
    
    if(a>b)
    {
        if (a>c)
        {
            cout<<"A=max";
        }


    }
          else if (b>c)
        {
            cout<<"B=max";
        }
    else 
        {
            cout<<"C=max";
        }
    
    
return 0;
}

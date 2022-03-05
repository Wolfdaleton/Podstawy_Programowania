#include<iostream>
using namespace std;

void zamien1(int a, int b)
{
	int temp1;
	temp1=a;
	a = b;
	b = temp1;

	cout << "Po wykonaniu funkcji a= " << a << '\t' << "b=" << b << endl;

}


void zamien2(int* a, int* b)
{
	int temp1=0;
	temp1=*a;
	*a = (*b);
	*b = temp1;
	
}

void zamien3(int &a, int &b)
{
	int  temp1=a;
	a = temp1;
	a = b;
	b = temp1;
}


int main()
{
	
	int a = 10, b=15;


	cout << "----------Zadanie 1----------" << endl;

	cout << "Przed wykonaniem funkcji a= " << a << '\t' << "b= " << b <<endl;
	zamien1(a, b);
  
  //Czy da się wywołać cout<< w main żeby otrzymać poprawne wartośći?




	cout << "----------Zadanie 2----------" << endl;

	cout << "Przed wykonaniem funkcji a= " << a << '\t' << "b= " << b << endl;
	zamien2(&a, &b);
	cout << "Po wykonaniu funkcji a= " << a << '\t' << "b= " << b << endl;



	cout << "----------Zadanie 3----------" <<endl;

	cout << "Przed wykonaniem funkcji a= " << a << '\t' << "b= " << b << endl;
	zamien3(a, b);
	cout << "Po wykonaniu funkcji a= " << a << '\t' << "b= " << b << endl;
}

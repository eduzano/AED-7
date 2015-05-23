#include <iostream>

using namespace std;

bool EsTriangulo(int , int , int); 

void GetTipoTriangulo(int , int , int);

int main()
{
	int a,b,c;
	cout<<"Ingresa tres lados (pulsando enter entre cada uno)\n";
	cin>>a>>b>>c;
	if(EsTriangulo(a,b,c)==true)
	{
		cout<<"Es triangulo ";
		GetTipoTriangulo(a,b,c);
	}
	else
		cout<<"No es triangulo \n";
}

bool EsTriangulo(int a , int b , int c)
{
	return a+b>c and b+c>a and a+c>b;
}

void GetTipoTriangulo(int a , int b , int c)
{
	enum Triangulos{equilatero , isosceles , escaleno}; //defino el enum
	int i;
	if(a==b and b==c) 
		i = 0;
	if(a==b and a!=c or b==c and b!=a)
		i = 1;
	if(a!=b and b!=c)
		i = 2;
	switch(i)
	{
		case equilatero:
			cout<<"y el mismo es equilatero \n";
			break;
		case isosceles:
			cout<<"y el mismo es isosceles \n";
			break;
		case escaleno:
			cout<<"y el mismo es escaleno \n";
			break;
	}
}

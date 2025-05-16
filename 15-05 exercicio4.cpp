#include <iostream>


using namespace std;


float div(float n1, float n2)
{
	if(n1 == 0 || n2 == 0)
	{
		return 0;
	}
	else
	{
		return n1/n2;
	}
}


int main()
{
	float numero1;
	float numero2;
	
	
	cout << "Digite o primeiro numero: ";
	cin >> numero1;
	
	cout << "Digite o segundo numero: ";
	cin >> numero2;
	
	float resultado = div(numero1, numero2);
	
	
	if(resultado == 0)
	{
		cout << "Divisao com 0 invalidada" <<endl;
	}
	else
	{
		cout << "A divisao de " << numero1 << " / " << numero2 << " == " << resultado <<endl;	
	}
	return 0;
}

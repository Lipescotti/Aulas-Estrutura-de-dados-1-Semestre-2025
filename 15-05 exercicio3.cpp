#include <iostream>


using namespace std;


float mult(float n1, float n2)
{
	return n1 * n2;
}


int main()
{
	float numero1;
	float numero2;
	
	
	cout << "Digite o primeiro numero: ";
	cin >> numero1;
	
	cout << "Digite o segundo numero: ";
	cin >> numero2;
	
	float resultado = mult(numero1, numero2);
	
	
	cout << "A multiplicao de " << numero1 << " * " << numero2 << " == " << resultado <<endl;
	
	return 0;
}

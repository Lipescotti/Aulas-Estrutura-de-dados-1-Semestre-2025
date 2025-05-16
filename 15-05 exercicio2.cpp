#include <iostream>


using namespace std;


int subtracao(int n1, int n2)
{
	return n1 - n2;
}


int main()
{
	int numero1;
	int numero2;
	
	
	cout << "Digite o primeiro numero: ";
	cin >> numero1;
	
	cout << "Digite o segundo numero: ";
	cin >> numero2;
	
	int resultado = subtracao(numero1, numero2);
	
	
	cout << "A subtracao de " << numero1 << " - " << numero2 << " == " << resultado <<endl;
	
	return 0;
}

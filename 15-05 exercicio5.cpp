#include <iostream>


using namespace std;

float soma(float n1, float n2)
{
	return n1 + n2;
}

float sub(float n1, float n2)
{
	return n1 - n2;
}

float mult(float n1, float n2)
{
	return n1 * n2;
}

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
	float numero1, numero2, resultado;
	char escolha, choise;
	
	cout << "Digite o primeiro numero: ";
	cin >> numero1;
	
	
	cout << "Digite o segundo numero: ";
	cin >> numero2;
	
	
	do
	{
	
		do
		{
			cout << "Escolha a operacao desejada ( '+', '-', '*' ou '/')" << endl;
			cin >> escolha;
			if(escolha != '+' && escolha != '-' && escolha != '*' && escolha != '/')
			{
				cout << endl <<"ESCOLHA INVALIDA" << endl << endl;
			}
		}while(escolha != '+' && escolha != '-' && escolha != '*' && escolha != '/');
	
	
		switch(escolha)
		{
			case '+':
			resultado = soma(numero1, numero2);
			break;
		
			case '-':
			resultado = sub(numero1, numero2);
			break;
		
			case '*':
				resultado = mult(numero1, numero2);
			break;
		
			case '/':
				resultado = div(numero1, numero2);
			break;
		}
	
		if(escolha == '/' && resultado == 0)
		{
			cout << "Divisao com 0 invalidada" << endl;
		}
		else
		{
			cout << numero1 << " " << escolha << " " << numero2 << " = " << resultado << endl;
		}
		
		do
		{
			cout<< "Trocar operacao (S ou N) ?" << endl;
			cin >> choise;
			
			if(choise != 'S' && choise != 's' && choise != 'N' && choise != 'n')
			{
				cout << endl <<"ESCOLHA INVALIDA" << endl << endl;
			}
			
		}while(choise != 'S' && choise != 's' && choise != 'N' && choise != 'n');
	}while(choise == 's' || choise == 's');
}

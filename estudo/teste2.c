#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
	char operação;
	float n1, n2, resultado;
	int resto;

	printf("digite a operacao (+ , - , * , / ) : ");
	scanf("%c", &operação);

	printf("digite o primeiro numero");
	scanf("%f", &n1);

	printf("digite o segundo numero:");
	scanf("%f", &n2);

	switch (operação)
	{
	case '+':
		resultado = n1 + n2;
		break;
	case '-':
		resultado = n1 - n2;
		break;
	case '*':
		resultado = n1 * n2;
		break;
	case '/':
		if (n2 != 0)
		{
			resultado = n1 / n2;
			resto = (int)n1 % (int)n2;
		}

		else
		{
			printf("nao e possivel dividir por 0 ");
		}
		break;
		

	default:
		printf("operacao invalida");
		return 1;


	}
	if (operação == '/')
	{
		printf("Resultado : %.2f  resto: %d\n", resultado, resto);
		
	}
	else
	{
		printf("Resultado : %.2f\n", resultado);

	}
	
	
	
	return 0;
}

//by Pyzxx
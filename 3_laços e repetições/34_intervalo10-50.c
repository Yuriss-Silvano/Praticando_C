/* Ler 10 valores, um de cada vez, e contar quantos deles estão no intervalo
[10...50] e quantos deles estão fora deste intervalo.
Mostrar as quantidades calculadas. */

#include <stdio.h>

int main()
{
	int i, valor, qdentro = 0, qfora = 0;
	
	for(i = 1; i <= 10; i++)
	{
		printf("Digite o seu numero %i: \n", i);
		scanf("%i", &valor);
		
		if(valor >= 10 && valor <= 50)
		{
			qdentro++;	
		}
		
	else
		{
			qfora++;
		}
	}
	printf("Valores dentro do intervalo entre 10-50: %i \n", qdentro);
	printf("Valores fora do intervalo entre 10-50: %i \n", qfora);
	
	return 0;
}
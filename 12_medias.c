/* Fazer um algoritmo que calcule a média aritmética
dos números 7, 8 e 9 e a média dos números 4, 5 e 6.
Mostre a soma das duas médias e a média das médias. */

#include <stdio.h>

int main()
{
	float med1, med2, somaMed, MedMed;
	
	med1 = (7+8+9) / 3.00;
	med2 = (4+5+6) / 3.00;
	
	printf("O valor da media 1 igual a: %.2f \n", med1);
	printf("O valor da media 2 igual a: %.2f \n", med2);
	
	somaMed = med1 + med2 ;
	printf("O valor da soma das medias e igual a: %.2f \n", somaMed);
	
	MedMed = (med1 + med2) / 2.00;
	printf("O valor da media das medias e igual a: %.2f", MedMed);
	
	return 0;	
}
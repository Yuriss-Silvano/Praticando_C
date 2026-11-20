/* Calcular o valor de S dado pela sequência:
 S = 1 + 3/2 + 5/3 + 7/4 + ... + 99/50. */
 
 #include<stdio.h>
 
 int main()
 {
	 int i;
	 float S = 0;
	 
	 for(i = 1; i <= 50; i++)
	 {
	 	S += (2 * i - 1) / (float)i;
	 }
	 
	 printf("O valor da sequencia de S e: %.2f \n", S);
	 
	 return 0;
 }
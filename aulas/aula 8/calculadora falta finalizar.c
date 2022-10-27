#include <stdio.h>
#include <math.h>
double soma (double num1, double num2){
	return num1 + num2;
}
double subtrair (double num1, double num2){
	return num1 - num2;
}
double multiplicar (double num1, double num2){
	return num1 * num2;
}
double dividir (double num1, double num2){
	return num1 / num2;
}

	int main(){
	double num1,num2;
	int opcao;
	printf ("digite numero 1: ");
	scanf ("%d", &num1);
	printf ("digite numero 2: ");
	scanf ("%d", &num2);
	switch (opcao){
		case 1: printf ("%.1lf\n", soma (num1, num2)); break;
		case 2: printf ("%.1lf\n", subtrair (num1, num2)); break;
		case 3: printf ("%.1lf\n", multiplicar (num1, num2)); break;
		case 4:	printf ("%.1lf\n", dividir (num1, num2)); break;
		
		
	}
}

#include<stdio.h>

int main (){
int hora[10], minutos[10], segundos[10], i;
char nomeu[50];

printf("digite o nome do usuario: ");

scanf("%s", &nomeu);
		for (i=0; i<3; i++){
		
			printf("digite o horario que deseja converter em horas: ");
			scanf("%i", &hora[i]);
				
			minutos[i] = hora[i] * 60;
			
			segundos[i] = hora[i] * 3600;
			
		}
printf ("\nNome do usuario %s\n ", &nomeu);
			for (i=0; i<3; i++){
				printf ("\nnHora = %i", hora[i]);
				printf ("\nMinutos = %i\n", minutos[i]);
				printf ("Segundos = %i\n", segundos[i]);
}
}

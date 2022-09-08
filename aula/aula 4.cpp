#include<stdio.h>
int main (){
float nota1[3],nota2[3],media[3];
int i;

		for(i = 0; i<3; i++ ){
		
	
		printf ("digite a nota 1 ");
		scanf ("%f", &nota1[i]);
	
}
		for(i = 0; i<3; i++ ){
			
		
			printf ("nota: %f\n", nota1[i]);
	
	
}
			for(i = 0; i<3; i++ ){
				
			
				printf ("digite a nota 2 ");
				scanf ("%f", &nota2[i]);
	
}
				for(i = 0; i<3; i++ ){
					
				
					printf ("nota: %f\n", nota2[i]);
}

					for(i = 0; i<3; i++ ){

					
						media[i] = (nota1[i]+nota2[i])/2;
				 
					 	printf ("%f\n", media[i]);


}




}


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
printf ("nome do usuario %s \n", &nomeu);
for (i=0; i<3; i++){
printf ("hora = %i\n", hora[i]);
printf ("minutos = %i\n", minutos[i]);
printf ("segundos = %i", segundos[i]);
}
}

#include<stdio.h>
int main(){
double cd[5], cd10[5], cdx[5];
int i, porcentagem;

	for (i = 0; i < 5; i++){
	
	printf("digite o valor do CD %i: ", i+1);
	scanf("%lf", &cd[i]);
	}	
		
		for (i = 0; i < 5; i++){
		
		 cd10[i] = cd[i] + ((cd[i] * 10) /100);
		}
printf ("\nvendedor, digite a porcentagem que deseja: ");		
scanf ("%d", &porcentagem);
		
			for (i = 0; i < 5; i++){
				cdx[i] = cd[i] + ((cd[i] * porcentagem) /100);
	
}

				for (i=0; i<5; i++){

					printf("\n\tvalor do cd %i e %.2lf\n\tCom 10 pasara a custar %.2lf\n\tE com sua margem custara %.2lf\n\n\t  " ,i+1, cd[i], cd10[i], cdx[i]);
}
return 0;
}

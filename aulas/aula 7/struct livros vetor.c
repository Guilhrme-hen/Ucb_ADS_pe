#include<stdio.h>
struct livro{
	char nome[30],editora[30];
	float valor;
	int volume;
	};
	
int main (){		
	
	struct livro livro[3];
	int i;
	
		for (i=0; i<3; i++){	
		printf ("\nDigite o nome do livro: ");
		scanf("%s", &livro[i].nome);
			
		printf ("Digite a editora livro: ");
		scanf("%s", &livro[i].editora);
		
		printf ("Digite volume do livro: ");
		scanf("%i", &livro[i].volume);
			
		printf ("Digite valor do livro: ");
		scanf("%f", &livro[i].valor);
		
		
		
	}		
	printf ("lista de livros cadastrados\n");
	printf ("Nome\tEditora\tValor\tVolume\n");	
			for (i=0; i<3; i++){
	printf ("%s\t%s\t%i\t%.2f\n",livro[i].nome,livro[i].editora,livro[i].volume,livro[i].valor);		

	}
}

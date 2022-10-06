#include<stdio.h>
struct livro{
	char nome[30],editora[30];
	float valor;
	int volume;
	};
	
int main (){		
	
	struct livro livro1, livro2;
			
		printf ("Digite o nome do livro: ")
		scanf("%s", &livro1.nome);
			
		printf ("Digite a editora livro: ")
		scanf("%s", &livro1.editora);
			
		printf ("Digite valor do livro: ")
		scanf("%s", &livro1.valor);
		
		printf ("Digite volume do livro: ")
		scanf("%s", &livro1.volume);
		
		//livro2
		
			printf ("Digite o nome do livro: ")
			scanf("%s", &livro2.nome);
			
			printf ("Digite a editora livro: ")
			scanf("%s", &livro2.editora);
			
			printf ("Digite valor do livro: ")
			scanf("%s", &livro2.valor);
		
			printf ("Digite volume do livro: ")
			scanf("%s", &livro2.volume);
	
		
	}
	
	
	

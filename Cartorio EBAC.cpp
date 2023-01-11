#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
	int registro()
	{ 	
		char arquivo[40];
		char cpf[40];
		char nome[40];
		char sobrenome[40];
		char cargo[40];
		
		printf ("Digite o CPF a ser cadastrado: \n");
		scanf("%s", cpf);
		
		strcpy (arquivo, cpf);
		
		FILE *file;
		file = fopen(arquivo, "w");
		fprintf(file, cpf);
		fclose(file);
		
		file = fopen(arquivo, "a");
		fprintf(file, ",");
		fclose(file);
		
		printf("Digite o nome a ser cadastrado: \n");
		scanf ("%s", nome);
		file=fopen(arquivo, "a");
		fprintf(file, nome);
		fclose(file);
		
		file = fopen(arquivo, "a");
		fprintf(file, ",");
		fclose(file);
				
		printf ("Digite o sobrenome a ser cadastrado: \n");
		scanf("%s", sobrenome);
		file=fopen(arquivo, "a");
		fprintf(file, sobrenome);
		fclose(file);
		
		file = fopen(arquivo, "a");
		fprintf(file, ",");
		fclose(file);
		
		printf("Digite o cargo: ");
		scanf("%s", cargo);
		
		file=fopen(arquivo, "a");
		fprintf(file, cargo);
		fclose(file);
		
		file = fopen(arquivo, "a");
		fprintf(file, ",");
		fclose(file);
		system("pause");	
	}
	
	int consulta()
	{
		char cpf[40];
		char conteudo[200];
		
		setlocale(LC_ALL, "Portuguese");
		
		printf("Digite o CPF a ser consultado: \n");
		scanf("%s", cpf);
				
		FILE *file;
		file = fopen(cpf, "r");
		if(file == NULL)
		{
		printf("Não foi possivel abrir o arquivo. \n"); 
		}
		while(fgets(conteudo, 200, file)!= NULL)
		{ 
		printf("Essas sao as informacoes do usuario: \n");
		printf("%s", conteudo);
		
		}	
		system("pause");
	}
	int deletar()
	{
		char cpf[40];
		
		printf("Digite o CPF a ser deletado: \n");
		scanf("%s", cpf);
				
		remove(cpf);
		
		FILE *file;
		file = fopen(cpf, "r");
		
		if(file == NULL)
		{
			printf("Usuario não encontrado. \n");
			system("pause");
		}
		
		system("pause");
		
	}

	int main()
	{
		
		int opcao=0;
		int laco=1;
		
		for (laco=1;laco=1;)
		{
			system("cls");
			setlocale(LC_ALL, "Portuguese");
		
			printf("##Cartorio da EBAC## \n");
			printf("Escolha a opcao desejada do menu \n");
			printf("\t1 - Registrar nome \n");
			printf("\t2 - Consultar nome \n");
			printf("\t3 - Deletar nome \n");
			scanf("%d", &opcao);
		
			system("cls");
		
			switch(opcao) 
			{
			case 1: 
			registro();
			break;
			
			case 2: 
			consulta();
			break;
			
			case 3: 
			deletar();
			break;
			
						
			default: 
			printf ("Escolha uma opcao valida! \n");
			break;
			}
		}
	}

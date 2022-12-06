#include "./cores.h"

void menu1()
{
	int menu, voltar;
    char temp[20];
	do
	{
		system("cls");
		printf(COR_White "──────────────────────── MENU ────────────────────────\n\n\
"COR_Cyan" [1] "COR_White" > Cadastrar a sua embarcacao\n\n\
"COR_Cyan" [2] "COR_White" > Informacoes das embarcacoes em todos os cais\n\n\
"COR_Cyan" [3] "COR_White" > Informacoes das embarcacoes em um tipo de cais\n\n\
"COR_Cyan" [4] "COR_White" > Simular o valor a pagar\n\n\
"COR_Cyan" [5] "COR_White" > Valores Pagos\n\n\
"COR_Cyan" [6] "COR_White" > Numeros de lugares vagos\n\n\
"COR_Cyan" [7] "COR_White" > Prolongamento da estadia\n\n\
"COR_Cyan" [8] "COR_White" > Dados das embarcaoces que estao a sair\n\n\
"COR_Cyan" [9] "COR_White" > Descontos disponiveis no momento\n\n\
"COR_Cyan" [0] "COR_White" > Sair");
		printf("\n\n--> ");
		scanf("%d", &menu);
	} while (menu < 0 || menu > 10);

	system("cls");

	switch (menu)
	{
	case 0:
        exit(1);
		break;
	case 1:
		inserirEmbarcacao();
		break;
	case 2:
		listarEmbarcacoes();
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	case 7:
		break;
	case 8:
		break;
	case 9:
		break;
	}
}

void inserirEmbarcacao()
{
	int voltar;
	char temp[20];

	system("cls");
	printf("----------"COR_Blue" Tipo de embarcacao "COR_White"----------\n\n\
1- Portuguesa \n\
2- Estrangeira\n");
	printf("\n--> ");
	scanf("%d", &Dados[embarcacoes_id].origem);

	while (Dados[embarcacoes_id].origem < 1 || Dados[embarcacoes_id].origem > 2)
	{
		system("cls");
		printf(COR_Red "\n\nPor favor, insira uma origem válida...\n\n");
		printf(COR_White "----------Tipo de embarcacao----------\n\n\
1- Portuguesa \n\
2- Estrangeira\n");
		printf("\n--> ");
		scanf("%d", &Dados[embarcacoes_id].origem);
	}

	fflush(stdin);
	scanf("%c", &temp);

	printf("\nInsira o nome da sua matricula");
	printf("\n--> ");
	gets(Dados[embarcacoes_id].mat_n);

	printf("\nInsira o numero da sua matricula");
	printf("\n--> ");
	scanf("%d", &Dados[embarcacoes_id].mat_num);

	printf("\nInsira a classe da sua matricula");
	printf("\n--> ");
	scanf("%d", &Dados[embarcacoes_id].mat_classe);

	printf("\nInsira a origem da sua matricula ex.: (%s)", (Dados[embarcacoes_id].origem == 1) ? "PT" : "GE");
	printf("\n--> ");
	fflush(stdin);
	scanf("%c", &temp);
	gets(Dados[embarcacoes_id].mat_origem);

	printf("\nA sua matricula e --> "COR_Cyan"%s-%d-%d%s"COR_White, Dados[embarcacoes_id].mat_n, Dados[embarcacoes_id].mat_num, Dados[embarcacoes_id].mat_classe, Dados[embarcacoes_id].mat_origem);

	printf("\n\nInsira o nome do proprietario");
	printf("\n--> ");
	scanf("%s", &Dados[embarcacoes_id].proprietario);

	printf("\nInsira o nome do capitao");
	printf("\n--> ");
	scanf("%s", &Dados[embarcacoes_id].capitao);

	printf("\nInsira o numero de passageiros");
	printf("\n--> ");
	scanf("%d", &Dados[embarcacoes_id].passageiros);

	printf("\nInsira a data de entrada ex.:(dd/mm/aaaa)");
	printf("\n--> ");
	scanf("%d/%d/%d", &Dados[embarcacoes_id].entrada_dia, &Dados[embarcacoes_id].entrada_mes, &Dados[embarcacoes_id].entrada_ano);

	printf("\nInsira a data de saida ex.:(dd/mm/aaaa)");
	printf("\n--> ");
	scanf("%d/%d/%d", &Dados[embarcacoes_id].saida_dia, &Dados[embarcacoes_id].saida_mes, &Dados[embarcacoes_id].saida_ano);

	system("cls");

	printf("\nTodos os dados preenchidos!\n");
	printf("\n1) Voltar para o menu \n2) Sair do programa");
	printf("\n\n--> ");
	scanf("%d", &voltar);

	embarcacoes_id++;

	while(voltar != 1 && voltar != 2)
	{
		system("cls");
		printf(COR_Red "\n\nPor favor, insira uma opção válida...\n\n"COR_White);
		printf("\n1) Voltar para o menu \n2) Sair do programa");
		printf("\n\n--> ");
		scanf("%d", &voltar);
	}	

	if (voltar == 1)
		menu1();
	else
		exit(1);	
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_EMBARCACOES 500

struct dados {
	char mat_n[20], mat_or[5], proprietario, capitao, pais, entrada, saida;
	int origem, mat_num, mat_clas,entrada_dia,entrada_ano, saida_dia, saida_ano, entrada_mes,saida_mes,passageiros;	
} Dados;

void main() {
	menu1();
}

void menu1() {
	int menu, voltar;
	do {
		system("cls");
		printf("----------------------MENU----------------------\n\n\
0) Sair\n\n\
1) Cadastrar a sua embarcacao\n\n\
2) Informacoes das embarcacoes em todos os cais\n\n\
3) Informacoes das embarcacoes em um tipo de cais\n\n\
4) Simular o valor a pagar\n\n\
5) Valores Pagos\n\n\
6) Numeros de lugares vagos\n\n\
7) Prolongamento da estadia\n\n\
8) Dados das embarcaoces que estao a sair\n\n\
9) Descontos disponiveis no momento ");
		printf("\n\n--> ");
		scanf("%d", &menu);	
}while(menu < 1 || menu > 10);
	system("cls");
	
	switch(menu) {
		case 0: 
			break;
		case 1:
			cadastro();
			break;
		case 2:
			ponto2();
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

void cadastro(){
	int voltar;
		do{
				system("cls");
				printf("----------Tipo de embarcacao----------\n\n\
1- Portuguesa \n\
2- Estrangeira\n");
				printf("\n--> ");
				scanf("%d", &Dados[id].origem);
	
		if (Dados[id].origem == 1){
		
			printf("\nInsira o nome da sua matricula ---> ");
			scanf("%s", Dados[id].mat_n);
			printf("\nInsira o numero da sua matricula ---> ");
			scanf("%d", &Dados[id].mat_num);
			printf("\nInsira a classe da sua matricula ---> ");
			scanf("%d", &Dados[id].mat_clas);
			printf("\nInsira a origem da sua matricula ex.:(PT) ---> ");
			scanf("%s", Dados[id].mat_or);
			printf("\nA sua matricula e --> %s-%d-%d%s",Dados[id].mat_n, Dados[id].mat_num, Dados[id].mat_clas, strupr (Dados[id].mat_or));
		} 
		else
		if (Dados[id].origem == 2){
		
			printf("\nInsira o nome da sua matricula ---> ");
			scanf("%s", Dados[id].mat_n);
			printf("\nInsira o numero da sua matricula ---> ");
			scanf("%d", &Dados[id].mat_num);
			printf("\nInsira a classe da sua matricula ---> ");
			scanf("%d", &Dados[id].mat_clas);
			printf("\nInsira a origem da sua matricula ex.:(PT) ---> ");
			scanf("%s", Dados[id].mat_or);
			printf("\nA sua matricula e --> %s-%d-%d%s\n", strupr (Dados[id].mat_n), Dados[id].mat_num, Dados[id].mat_clas, strupr (Dados[id].mat_or));
		}
		}while (Dados[id].origem < 1 || Dados[id].origem > 3);
		
			printf("\n\nInsira o nome do proprietario");
			printf("\n--> ");
			scanf("%s", &Dados[id].proprietario);
			
			printf("\nInsira o nome do capitao");
			printf("\n--> ");
			scanf("%s", &Dados[id].capitao);
			
			printf("\nInsira o numero de passageiros");
			printf("\n--> ");
			scanf("%d", &Dados[id].passageiros);
			
			printf("\nInsira a data de entrada ex.:(dd/mm/aaaa)");
			printf("\n--> ");
			scanf("%d/%d/%d", &Dados[id].entrada_dia, &Dados[id].entrada_mes, &Dados[id].entrada_ano);
			
			printf("\nInsira a data de saida ex.:(dd/mm/aaaa)");
			printf("\n--> ");
			scanf("%d/%d/%d", &Dados[id].saida_dia, &Dados[id].saida_mes, &Dados[id].saida_ano);
			
			
			printf("\nTodos os dados preenchidos!\n");
			printf("\n1) Voltar para o menu \n2) Sair do programa");
			printf("\n--> ");
			scanf("%d", &voltar);
		
			if (voltar == 1) {
				menu1();
			} else if (voltar == 2){
				system("pause");
			}
			system("cls");
			id++;	
}

void ponto2 (){
	int i;
	i=0;
	for(id=1; id<=50000; id++){
		if (emb[id].matricula_clas == 1){
			printf("----------Cais A----------");
			printf("\n%d) Nome --> %s", i+1 , Dados[id].proprietario);
			printf("Matricula --> %s-%d-%d%s", Dados[id].mat_n, Dados[id].mat_num, Dados[id].matricula_clas, Dados[id].matricula_or);
			printf("Data de entrada --> %d/%d/%d", Dados[id].entrada_dia, Dados[id].entrada_mes, Dados[id].entrada_ano);
			printf("Data de saida --> %d/%d/%d", Dados[id].saida_dia, Dados[id].saida_mes, Dados[id].saida_ano); 
		}
	}
	
	
}

/*void ponto4 (){
	int cais;
	printf("\n------Simular o valor a pagar------");
	printf("\nDiga qual o cais que pretende atracar o seu barco --> ");
	scanf("%d", &cais);
	
	switch (cais){
		case 1:
			
		break
	}
	
	
}*/

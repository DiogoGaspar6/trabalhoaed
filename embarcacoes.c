void listarEmbarcacoes()
{
    int voltar;

	printf("\n---------- Cais A ----------");
	for (size_t i = 1; i <= embarcacoes_id; i++)
	{
		if (Dados[i].mat_classe == 1)
		{
            printf("\nNúmero -> %d", i);
			printf("\nNome --> %s", Dados[i].proprietario);
			printf("\nMatricula --> %s-%d-%d%s", Dados[i].mat_n, Dados[i].mat_num, Dados[i].mat_classe, Dados[i].mat_origem);
			printf("\nData de entrada --> %d/%d/%d", Dados[i].entrada_dia, Dados[i].entrada_mes, Dados[i].entrada_ano);
			printf("\nData de saida --> %d/%d/%d\n", Dados[i].saida_dia, Dados[i].saida_mes, Dados[i].saida_ano);
		}
	}

	printf("\n\n---------- Cais B ----------");
	for (size_t i = 1; i <= embarcacoes_id; i++)
	{
		if (Dados[i].mat_classe == 2)
		{
            printf("\nNúmero -> %d", i);
			printf("\nNome --> %s", Dados[i].proprietario);
			printf("\nMatricula --> %s-%d-%d%s", Dados[i].mat_n, Dados[i].mat_num, Dados[i].mat_classe, Dados[i].mat_origem);
			printf("\nData de entrada --> %d/%d/%d", Dados[i].entrada_dia, Dados[i].entrada_mes, Dados[i].entrada_ano);
			printf("\nData de saida --> %d/%d/%d\n", Dados[i].saida_dia, Dados[i].saida_mes, Dados[i].saida_ano);
		}
	}

	printf("\n1) Voltar para o menu \n2) Sair do programa");
	printf("\n\n--> ");
	scanf("%d", &voltar);

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

#define MAX_EMBARCACOES 500

int embarcacoes_id = 1;

typedef struct mat
{
	char mat_n[20], mat_origem[5], proprietario[50], capitao[50], pais[50], entrada[50], saida[50];
	int origem, mat_num, mat_classe, entrada_dia, entrada_ano, saida_dia, saida_ano, entrada_mes, saida_mes, passageiros;
} Mat;

Mat Dados[MAX_EMBARCACOES] = {'\0'};
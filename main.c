#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

// Headers
#include "./dados.h"
#include "./funcoes.h"

// Funções
#include "./menus.c"
#include "./embarcacoes.c"
#include "./cores.h"

void main()
{
	setlocale(LC_ALL, "Portuguese");
	menu1();
}
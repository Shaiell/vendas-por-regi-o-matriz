#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <locale.h>
#include <time.h>

int main()
{
	int vendas[4][5];
	int x = 0, y = 0;
	int vendatotal = 0;
	int vendaregiao[5];
	char regiao[5][50];

	setlocale(LC_ALL, "portuguese");

	strcpy_s(regiao[0], "Norte");
	strcpy_s(regiao[1], "Nordeste");
	strcpy_s(regiao[2], "Sul");
	strcpy_s(regiao[3], "Suldeste");
	strcpy_s(regiao[4], "Centro-Oeste");

	for (x = 0; x < 4; x++) {
		for (y = 0; y < 5; y++) {
			vendas[x][y] = 0;

		}
	}
	for (y = 0; y < 5; y++) {
		vendaregiao[y] = 0;
	}

	for (x = 0; x < 4; x++) {
		for (y = 0; y < 5; y++) {
			printf("Informe a venda do %iº trimeste da região %s \n", x + 1,regiao[y]);
			scanf_s("%i", &vendas[x][y]);
			vendatotal = vendatotal + vendas[x][y];
		}
	}
	printf("O total vendido no pais too é: %i\n\n", vendatotal);

	for (y = 0; y < 5; y++) {
		for (x = 0; x < 4; x++) {
			
			vendaregiao[y] = vendaregiao[y] + vendas[x][y];
		}
	}
	for (x = 0; x < 5; x++) {
		printf("Foi vendido %i na região %s\n", vendaregiao[x],regiao[x]);
	}
}



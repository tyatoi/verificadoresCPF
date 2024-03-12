#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, d6 = 0, d7 = 0, d8 = 0, d9 = 0, dv1 = 0, dv2 = 0;
	printf("Escreva (entre espacos) os 9 primeiros digitos do seu cpf \n");
	scanf("%d", &d1);
	scanf("%d", &d2);
	scanf("%d", &d3);
	scanf("%d", &d4);
	scanf("%d", &d5);
	scanf("%d", &d6);
	scanf("%d", &d7);
	scanf("%d", &d8);
	scanf("%d", &d9);
	dv1 = d1 * 10 + d2 * 9 + d3 * 8 + d4 * 7 + d5 * 6 + d6 * 5 + d7 * 4 + d8 * 3 + d9 * 2;
	dv1 = dv1 * 10;
	dv1 = dv1 % 11;
	dv2 = d1 * 11 + d2 * 10 + d3 * 9 + d4 * 8 + d5 * 7 + d6 * 6 + d7 * 5 + d8 * 4 + d9 * 3 + dv1 * 2;
	dv2 = dv2 * 10;
	dv2 = dv2 % 11;
	printf("Seu primeiro digito verificador: %d\n", dv1);
	printf("Seu segundo digito verificador: %d\n", dv2);
	return 0;
	

}
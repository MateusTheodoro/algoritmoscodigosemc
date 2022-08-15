#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	
	do {
		printf(" -- Escolha o sabor do sorvete -- \n");
		printf("\t...(1)Flocos\n");
		printf("\t...(2)Morango\n");
		printf("\t...(3)Leite condensado\n");
		
		scanf("%d", &i);
	} while (i<1 || i>3);
	
	switch (i) {
		case 1:
			printf("\nVoce escolheu Flocos\n\n");
			break;
		case 2:
			printf("\nVoce escolheu Morango\n\n");
			break;
		case 3:
			printf("\nVoce escolheu Leite condensado\n\n");
			break;
		
	}

	
	
	return 0;
}

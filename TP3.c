#include <stdio.h>
#include <stdlib.h>
#define DIM_PARES 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	1)
	int pares[DIM_PARES];
	int i,n1,n2;
	for(i=0;i<DIM_PARES;i++){
		printf("\nIngrese el primer numero: ");
		scanf("%d",&n1);
		printf("Ingrese el segundo numero: ");
		scanf("%d",&n2);
		if(n1>n2){
			pares[i]=n1;
		}else{
			pares[i]=n2;
		}
	}
	printf("\n");
	for(i=0;i<DIM_PARES;i++){
		printf("[%d] ",pares[i]);
	}
	printf("\n");
	
	
	
	
	
	return 0;
}

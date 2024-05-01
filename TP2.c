#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	1)
	/*int num;
	printf("ingrese un numero entero para saber si es par o impar:");
	scanf("%d",&num);
	
	if(num % 2 == 0){
		printf("el numero es par");
	}
	else{
		printf("el numero es impar");
	}
	*/

//	2)
	float monto,mtotal,minteres;
	int anios, interes;
	printf("ingrese el monto y los años a depositar:");
	scanf("%f %d",&monto,&anios);
	
	if(anios >= 5){
		interes=25;
		minteres = monto * 0.25;
		mtotal = monto + minteres;
	}
	else{
		interes=16;
		minteres = monto * 0.16;
		mtotal = monto + minteres;
	}
	
	printf("Monto Depositado:%.2f\t Cantidad de Años:%d\t Tasa de Interes:%d\n", monto, anios, interes);
	printf("Monto de Interes:%.2f\t\t Monto Total con Intereses:%.2f", minteres, mtotal);
	
	return 0;
}
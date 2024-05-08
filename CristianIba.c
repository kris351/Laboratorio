#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*Cristian Ibañez
	DNI:45271489
	ALDO*/	
	/*float num1,num2,R;
	char op;
	printf("Ingresa 2 numeros y el operador:");
	scanf("%f %f %c",&num1,&num2,&op);
	if(op=='+'){
		R=num1+num2;
		printf("%f + %f = %f",num1,num2,R);
	}else{
		if(op=='-'){
			R=num1-num2;
			printf("%f - %f = %f",num1,num2,R);
		}else{
			if(op=='*'){
				R=num1*num2;
				printf("%f * %f = %f",num1,num2,R);
			}else{
				if(op=='/'){
					R=num1/num2;
					printf("%f / %f = %f",num1,num2,R);
				}
			}
		}
	}*/
	
	//	7) y 8) y 13) (ya la habia hecho con switch junto con la 8)
	/*float num1, num2, resultado;
	char op;
	printf("Calcule 2 numeros con una operacion:");
	scanf("%f %c %f",&num1,&op,&num2);
	switch(op){
		case '+':
			resultado = num1+num2;
			break;
		case '-':
			resultado = num1-num2;
			break;
		case'/':
			if(num2!=0){
				resultado = num1/num2;
			}else{
				printf("No se puede realizar esa operacion.");
			}
			break;
		case '*':
			resultado = num1 * num2;
			break;
		default:
			printf("Ingrese un operador valido.");			
			break; 
	}
	
	if(num2!=0){
		printf("%f %c %f = %f", num1, op, num2, resultado);
	}*/
	
//	19)
	/*int N,NUM,MAY=INT_MIN,MEN=INT_MAX,cv=1;
	printf("ingrese la cantidad de numeros:");
	scanf("%d",&N);
	while(cv<=N){
		printf("numero %d:",cv);
		scanf("%d",&NUM);
		if(NUM>MAY){
			MAY=NUM;
		}
		if(NUM<MEN){
			MEN=NUM;
		}
		cv++;
	}
	printf("%d \n",MAY);
	printf("%d ",MEN);
	*/
//	21)
	/*int cant=0,cimp=0,num,porcen;
	printf("ingrese una serie de numeros:");
	scanf("%d",&num);
	
	while(num!=0){
		if(num % 2 != 0){
			cimp=cimp+1;
		}
		cant++;
		scanf("%d",&num);
	}
	
	porcen=cimp*100/cant;
	printf("el porcentaje de los numeros imapares:%d",porcen);*/
	
	
	
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define DIM_PARES 3
#define x 6


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	1)
	/*int pares[DIM_PARES];
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
		printf("[%d]",pares[i]);
	}
	printf("\n");*/
//	2)
	/*int digitos[4];
	int num,m,c,d,u,aux,i;
	printf("Ingrese un digito de 4 digitos: ");
	scanf("%d",&num);
	
	if(num<=9999){
		m=num/1000;
		aux=num-m*1000;
		c=aux/100;
		aux=aux-c*100;
		d=aux/10;
		u=aux%10;
		
		digitos[0]=m;
		digitos[1]=c;
		digitos[2]=d;
		digitos[3]=u;
		
		printf("\n");
		for(i=0;i<4;i++){
			printf("[%d]",digitos[i]);
		}
		printf("\n");
	}else{
		printf("\nNo es un numero de 4 digitos...");
	}*/
//	3)
	/*int dim_edades;
	printf("Ingrese un la cantidad de edades: ");
	scanf("%d",&dim_edades);
	int i,edades[dim_edades],edad;
	
	for(i=0;i<dim_edades;i++){
		printf("Ingrese la edad %d: ",i+1);
		scanf("%d",&edad);
		edades[i]=edad;
	}
	printf("\n");
	for(i=0;i<dim_edades;i++){
		printf("[%d]",edades[i]);
	}
	printf("\n");*/
//	4)
	/*float prom,sum,precios[5]={13.25,18.20,43.99,106.45,81.93};
	int i;
	printf("\n");
	for(i=0;i<5;i++){
		sum=sum+precios[i];
		printf("[%.2f]",precios[i]);
	}
	printf("\n");
	prom=sum/5;
	printf("El promedio de los precios: %.2f",prom);
	printf("\nEl precio menor: %.2f  El precio mas alto: %.2f",precios[0],precios[4]);
	printf("\n");*/
//	5)
	/*float temperaturas[12]={13.25,18.20,43.99,50.45,41.93,5.51,8.8,18,48.6,45.6,35.6,48.1};
	int i,t=4,c=3;
	printf("Trimestre\t\tMes");
	
	
	printf("\tTemperatura Promedio\n");
	printf("_________________________________________________\n");
	printf("Segundo semestre\t 4\t[%.2f]\n\t\t\t 5\t[%.2f]\n\t\t\t 6\t[%.2f]\n",temperaturas[c],temperaturas[c+1],temperaturas[c+2]);
	c+=6;
	printf("Cuarto semestre\t\t 10\t[%.2f]\n\t\t\t 11\t[%.2f]\n\t\t\t 12\t[%.2f]",temperaturas[c],temperaturas[c+1],temperaturas[c+2]);
	*/
//	6)
	
	/*float aux=0,elem[x]={13.25,18.20,43.99,50.45,41.93,5.51};
	int i;
	for(i=0;i<(x/2);i++){
		aux=elem[x-i-1];
		elem[x-i-1]=elem[i];
		elem[i]=aux;
		
	}
	for(i=0;i<x;i++){
		printf("[%.2f]",elem[i]);
	}*/
//	7)
	/*int digitos[4];
	int num,m,c,d,u,aux,i,b;
	printf("Ingrese un digito de 4 digitos: ");
	scanf("%d",&num);
	
	if(num<=9999){
		m=num/1000;
		aux=num-m*1000;
		c=aux/100;
		aux=aux-c*100;
		d=aux/10;
		u=aux%10;
		
		digitos[0]=m;
		digitos[1]=c;
		digitos[2]=d;
		digitos[3]=u;
		
		printf("\n");
		for(i=0;i<4;i++){
			printf("[%d]",digitos[i]);
		}
		printf("\n");
		b=0;
		if(digitos[0]==digitos[3]){
			if(digitos[1]==digitos[2]){
				printf("Es capicua!!");
			}
		}
	}else{
		printf("\nNo es un numero de 4 digitos...");
	}*/
//	8)
	/*int cantidad[6];
	float precio[6],totalPagar[6],total=0,prec;
	int cant,i;
	for(i=0;i<6;i++){
		printf("\nIngrese la cantidad: ");
		scanf(" %d",&cant);
		printf("Ingrese el precio: ");
		scanf(" %f",&prec);
		cantidad[i]=cant;
		precio[i]=prec;
		totalPagar[i]=prec*cant;
		total+=totalPagar[i];
	}
	printf("\nCantidad\tprecio\t\ttotal a pagar");
	printf("\n______________________________________________");
	for(i=0;i<6;i++){
		printf("\n[%d]\t\t[%.2f]\t\t[%.2f]",cantidad[i],precio[i],totalPagar[i]);
	}
	printf("\nTotal: %.2f",total);*/
//	9)
	/*int j,k;
	float numeros[20]={3.14, -7.5, 0.618, 10.2, -4.75, 2.718, 100.5, -1.23, 5.67, -0.005, 8.9, -15.4, 0.999, 0, -3.33, 4.2, -2.718, 50.123, -11.11, 6.66};
	int p=0,n=0,i;
	float negativos[20],positivos_nulos[20];
	for(i=0;i<20;i++){
		if(numeros[i]>=0){
			positivos_nulos[p]=numeros[i];
			p++;
			
		}else{
			negativos[n]=numeros[i];
			n++;
			
		}
	}
	
	for(i=0;i<20;i++){
		printf("[%.3f]",numeros[i]);
	}
	printf("\n");
	for(i=0;i<p;i++){
		printf("[%.3f]",positivos_nulos[i]);
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("[%.3f]",negativos[i]);
	}
	printf("\n");*/
//	10)
	/*int n;
	scanf("%d",&n);
	int i,j,p,k,b=0;
	float numeros[n],aux,num,numero;
	printf("Llene el vector\n");
	for(i=0;i<n;i++){
		scanf("%f",&num);
		numeros[i]=num;
	}
	for(i=0;i<n;i++){
		p=i;
		for(j=i+1;j<n;j++){
			if(numeros[j]<numeros[p]){
				p=j;
			}
		}
		for(k=0;k<n;k++){
			aux=numeros[p];
			numeros[p]=numeros[i];
			numeros[i]=aux;
		}	
	}
	printf("\nIngrese un numero para saber si esta en el vector:");
	scanf("%f",&numero);
	for(i=0;i<n;i++){
		if(numeros[i]==numero){
			b=1;
		}else{
			b=0;
		}
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("[%.2f]",numeros[i]);
	}
	printf("\n");
	if(b!=0){
		printf("\nNumero encontrado!!\n");
	}else{
		printf("\nNo existe..\n");
	}*/
	
	
	return 0;
}
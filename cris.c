#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	30)
	int cod,cod_men,emp,N,e,c,dni,anio_ingreso,cant_emp,antiguedad;
	float sum,sue,prom,prom_men,men=INT_MAX;
	
	printf("Ingrese la cantidad de empleados:");
	scanf("%d",&N);
	
	c=0;
	while(c<3){
		printf("Ingrese el codigo de sucursal:");
		scanf("%d",&cod);
		
		
		sum=0;
		e=0;
		while(e<N){
			
			printf("Ingrese DNI,sueldo y anio de ingreso");
			scanf("%d %f %d",&dni,&sue,&anio_ingreso);
			
			sum=sum+sue;
			emp++;
			antiguedad=2024-anio_ingreso;
			
			if(antiguedad >= 15 && antiguedad < 25 ){
				cant_emp++;
			}
			e++;	
		}
		prom=sum/emp;
		
		if(prom<men){
			prom_men=prom;
			cod_men=cod;
		}
		c++;
	}
	
	printf("el codigo de sucursal con menor promedio de sueldo:%d\n",cod_men);
	printf("Cantidad de empleados que tengan antiguedad >= 15 años y < a 25 años:%d",cant_emp);
	
	
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*Cristian Ibañez
	DNI:45271489
	ALDO*/	
	//	1)
	/*int num;
	scanf("%d",&num);
	
	if(num % 2 == 0){
	
		printf("el numero %d es par!!",num);
	}
	else{
	
		printf("el numero %d no es par!! \n",num);
	}*/
//	2) (con tasa de interes compuesto)
	/*int anios,c;
	float monto, mtotal,interes;
	printf("Ingrese la cantidad de dinero a depositar y la cantidad de años:");
	scanf("%f %d",&monto,&anios);
	
	if(anios>=5){
		for(c=1;c<=anios;c++){
			monto=monto+(monto*0.25);
			mtotal=monto;	
		}
		printf("Monto de Intereses: 25%\n");
		printf("Monto Total con interes: %.2f",mtotal);
	}	else{
		
			for(c=1;c<=anios;c++){
				monto=monto+(monto*0.16);
				mtotal=monto;	
		}
		printf("Monto de Intereses: 16%\n");
		printf("Monto Total con interes: %.2f",mtotal);
		}
	*/
//	7)
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
	
//	9)
	/*int anio,bisiesto;
	printf("Ingrese un anio para ver si es bisiesto:");
	scanf("%d",&anio);
	
	if(anio % 400 == 0 || anio % 4 == 0 && anio % 100 != 0){
		printf("El anio %d es bisiesto",anio);
	}else{
		printf("El anio %d no es bisiesto",anio);
	}*/
	
//	10)
	/*int cua,ang;
	printf("Ingrese el angulo de la linea:");
	scanf("%d",&ang);
	
	if(ang>0 && ang<90){
		
		printf("El angulo pertece al cuadrante I");
	
	}else{
		if(ang>90 && ang<180){
		
		printf("El angulo pertece al cuadrante II");	
		
		}else{
			if(ang>180 && ang<270){
				
				printf("El angulo pertece al cuadrante III");
			
			}else{
				if(ang>270 && ang<360){
					
					printf("El angulo pertece al cuadrante IV");
					
				}else{
					if(ang==0 || ang==90 || ang==180 || ang==270){
						
						printf("La linea no reside en ningun cuadrante");
						
					}
				}
				
			}
		}
	}*/
	
//	11)
/*	int model,p,clase;
	float monto;
	
	printf("ingrese el año modelo y peso:");
	scanf("%d %d",&model,&p);
	
	if(model <= 2000 && p < 1000){
		clase=1;
		monto=2600.0f;
		printf("Su clase de peso:%d \t Monto mensual:%.2f",clase,monto);
	}else{
		if(model <= 2000 && p > 1000 && p < 1500){
			clase=2;
			monto=3500.0f;
			printf("Su clase de peso:%d \t Monto mensual:%.2f",clase,monto);
		}else{
			if(model <= 2000 && p > 1500){
				clase=3;
				monto=4560.70;
				printf("Su clase de peso:%d \t Monto mensual:%.2f",clase,monto);
			}else{
				if(model <= 2001 && model >= 2009 && p < 1000){
					clase=4;
					monto=5300.45;
					printf("Su clase de peso:%d \t Monto mensual:%.2f",clase,monto);
				}else{
					if(model <= 2001 && model >= 2009 && p > 1000 && p < 1500){
						clase=5;
						monto=6550.50;
						printf("Su clase de peso:%d \t Monto mensual:%.2f",clase,monto);
					}else{
						if(model <= 2001 && model >= 2009 && p > 1500){
							clase=6;
							monto=7620.22;
							printf("Su clase de peso:%d \t Monto mensual:%.2f",clase,monto);
						}else{
							if(model >= 2010 && p < 1500){
								clase=7;
								monto=8490.50;
								printf("Su clase de peso:%d \t Monto mensual:%.2f",clase,monto);
							}else{
								if(model >= 2010 && p >1500){
									clase=8;
									monto=9620.50;
									printf("Su clase de peso:%d \t Monto mensual:%.2f",clase,monto);
								}
							}
						}
					}
				}
			}
		}
	}*/
//	12)
	/*int cod;
	printf("Ingrese un codigo para saber la capacidad de un pendrive:");
	scanf("%d",&cod);
	
	if(cod==1){
		printf("\nSu capacidad es de: 2 GB\n");
	}else{
		if(cod==2){
			printf("\nSu capacidad es de: 4 GB\n");	
		}else{
			if(cod==3){
				printf("\nSu capacidad es de: 16 GB\n");
			}else{
				if(cod==4){
					printf("\nSu capacidad es de: 32 GB\n");
				}else{
					printf("\nCodigo incorrecto\n");
				}
			}
		}
	}*/
//	14)
	/*int num=1,c;
	
	for(c=0;c<50;c++){
		
		if(num % 2 == 0){
			printf("%d-",num);
		}
		num++;
	}*/
//	15)
	/*int num,c,aux=0;
	
	printf("Ingrese un numero para saber su tabla de multiplicar:");
	scanf("%d",&num);
	
	if(num>0){
		
		for(c=1;c<=10;c++){
			
			aux=aux+num;
			
			printf("%d * %d = %d\n",c,num,aux);
		}
	}*/
//	16)
/*	int num,c,aux=0;
	
	printf("Ingrese un nuero entero positivo para saber su tabla de multiplicar:");
	scanf("%d",&num);
		
	if(num>0){
		
		for(c=1;c<=10;c++){
			
			aux=aux+num;
			
			printf("%d * %d = %d\n",c,num,aux);
		}
	}else{
		printf("\nNo es un numero entero...\n");
	}*/
//	17)
	/*int c;
	float pesos,dolar=1.0f,aux;
	
	printf("Ingrese la cotizacion del dolar del dia:");
	scanf("%f",&pesos);
	
	printf("Cantidad de Dolares \t Cotizacion en Pesos\n");
	printf("_____________________________________________\n");
	
	for(c=1;c<=6;c++){
		aux=pesos*dolar;
		
		printf("%.0f \t \t \t %.2f\n",dolar,aux);
		dolar=dolar*10.0f;
	}*/
//	18)
	/*int num_ant,c,num=12;
	
	printf("%d-",num);
	
	for(c=0;c<19;c++){
		
		num=(num-1)*3+3;
		
		printf("%d-",num);
	}*/
//	19)
	/*int N,c,men=INT_MAX,num,may=INT_MIN;
	printf("Ingrese una serie de numeros:");
	scanf("%d",&N);
	
	
	for(c=1;c<=N;c++){
		
		printf("Numero %d: ",c);
		scanf("%d",&num);
		
		if(num<men){
			men=num;
		}
		if(num>may){
			may=num;
		}
	}
	
	printf("\nNumero menor: %d\n",men);
	printf("Numero mayor: %d",may);*/
//	20)
	/*int i,vocales=0,N;
	char c;
	printf("Ingrese una cantidad de caracteres:");
	scanf(" %d",&N);
	
	for(i=0;i<N;i++){
		
		printf("Ingrese una serie de caracteres:");
		scanf(" %c",&c);
		
		c=tolower(c);
		
		if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
			vocales++;
		}
	}
	if(vocales>0){
		
		printf("La cantidad de Vocales: %d",vocales);
		
	}else{
		
		printf("\nNo se ingresaron vocales...\n");
	}*/
//	21)
	/*int num;
	float porc,N,impar=0,c=0.0f;;	
	
	do{
		printf("Numero: ");
		scanf("%d",&num);
		
		if(num % 2 != 0 && num != 0){
			impar++;
		}
		c++;
	}while(num!=0);
	
	c--;
	porc=(impar*100)/c;
	
	printf("El porcentaje de los numeros impares:%f",porc);
	*/
//	22)
	/*int num,num_inv=0,digito;
	
	printf("Ingrese un numero para invertirlo:");
	scanf("%d",&num);
	
	while(num > 0){
		digito=num%10;
		num_inv=num_inv*10+digito;
		num=num/10;
	}
	
	printf("Numero invertido: %d",num_inv);*/
//	23)
	/*int div=0,num,resto=0,c;
	
	printf("Ingrese un numero para saber la cantidad de divisores: ");
	scanf(" %d",&num);
	
	for(c=1;c<=num;c++){
		resto=num%c;
		
		if(resto==0){
			div++;
		}
	}
	
	if(div>2){
		printf("\nEl numero tiene %d divisores\n",div);
	}else{
		printf("\nEl numero es primo\n");
	}*/
//	24)
	/*int num,fac,c=1,i;
	
	while(c==1){
		printf("\nIngrese un numero para su factorial: ");
		scanf("%d",&num);
	
		if(num<10){
			
			i=1;
			fac=1;
			for(i=1;i<=num;i++){
				fac=fac*i;
			}
			printf("el factorial de %d es: %d\n",num,fac);
			c=0;
		}else{
			c=1;
			printf("\nIngrese un numero de 1 digito...\n");
		}
		
	}*/
//	25)
	/*int n1,n2,c,sum=0,aux=0;
	
	printf("Ingrese un par de numeros: ");
	scanf("%d %d",&n1,&n2);
	
	for(c=0;c<n2;c++){
		
		sum=sum+n1;
	}
	
	printf("\nSu producto: %d",sum);*/

//	26)Ya lo habia hecho xd


//	27)
	/*char sexo,sexos;
	int N,c,dni,dt,m=0,f=0,dnis=0,dts=0;
	float sue,sumM=0,sumF=0,mays=INT_MIN,total=0,prom=0;
	printf("Ingresar la cantidad de empleados:");
	scanf("%d",&N);
	
	c=0;
	while(c<N){
		
		printf("Ingrese DNI,Sexo,DT(dias trabajados) y sueldo:");
		scanf("%d %c %d",&dni,&sexo,&dt);
		
		sexo=toupper(sexo);
		sue=dt*300;
		
		switch(sexo){
			case 'M':{
				
				sumM=(float)sumM+sue;
				m++;
				
				break;
			}
			case 'F':{
				if(dt<20){
					f++;
				}
				sumF=(float)sumF+sue;
				
				break;
			}
		}
		
		if(sue>mays){
			mays=sue;
			dnis=dni;
			sexos=sexo;
			dts=dt;
		}
		total=(float)sumM+sumF;
		c++;
	}
	
	total=(float)sumM+sumF;	
	prom=(float)sumM/m;
	printf("\n La cantidad de empleadas mujeres que trabajaron menos de 20 dias:%d ",f);
	printf("\n El sueldo promedio de los empleados varones:%f",prom);
	printf("\n Los datos del empleado con el sueldo mas alto:");
	printf("\n DNI:%d \t Sexo:%c \t DT(dias trabajados):%d",dnis,sexos,dts);
	printf("\n El total que gasta la empresa en sueldos:%f",total);
	printf("\n Lo que gasta la empresa en varones: %f",sumM);
	printf("\n Lo que gasta la empresa en mujeres: %f",sumF);
	*/
//	28)
	/*int N,boletas,impuesto,sum,c,i;
	
	printf("\nIngrese la cantidad de personas: ");
	scanf("%d",&N);
	
	for(c=1;c<=N;c++){
		
		printf("\nIngrese la cantidad de boletas a pagar de la persona %d: ",c);
		scanf("%d",&boletas);
		sum=0;
		for(i=1;i<=boletas;i++){
			printf("Ingrese el impuesto de la boleta %d de la persona %d: ",i,c);
			scanf("%d",&impuesto);
		
			sum=sum+impuesto;
		
		}
		printf("\nEl total de impuestos a pagar de la persona %d es: %d\n",c,sum);
	}*/
//	29)
	/*int cod_contribuyente,N,cod,c,i;
	float ingreso_anual,may_ingreso=INT_MIN,may_ingreso_anual=INT_MIN,Ingreso;
	printf("\nIngrese la cantidad de contribuyentes: ");
	scanf(" %d",&N);
	
	for(c=1;c<=N;c++){
		printf("\nIngrese el codigo de contribuyente: ");
		scanf(" %d",&cod);
		printf("\nIngrese el ingreso mensual: ");
		scanf(" %f",&Ingreso);
		
		ingreso_anual=Ingreso*12;
		
		if(may_ingreso<Ingreso){
			may_ingreso=Ingreso;
		}
		if(may_ingreso_anual<ingreso_anual){
			may_ingreso_anual=ingreso_anual;
			cod_contribuyente=cod;
		}
	}
	printf("\nEl mayor ingreso mensual: %f",may_ingreso);
	printf("\nEl cod del ingreso anual mayor: %d",cod_contribuyente);
	*/

//	30)
	/*int cod,cod_men=0,emp=0,N,e,c,dni,anio_ingreso,cant_emp=0,antiguedad=0;
	float sum=0.0f,sue,prom=0.0f,prom_men=0.0f,men=INT_MAX;
	
	
	
	c=1;
	while(c<=3){
		printf("Ingrese el codigo de sucursal:");
		scanf("%d",&cod);
		printf("Ingrese la cantidad de empleados:");
		scanf("%d",&N);
		
		sum=0;
		e=0;
		while(e<N){
			
			printf("Ingrese DNI,sueldo y anio de ingreso: ");
			scanf("%d %f %d",&dni,&sue,&anio_ingreso);
			
			sum=(float)sum+sue;
			emp++;
			antiguedad=2024-anio_ingreso;
			
			if(antiguedad >= 15 && antiguedad < 25 ){
				cant_emp++;
			}
			e++;	
		}
		
		if(emp=1){
			prom=(float)sum/emp;
		}
		
		if(prom < men){
			men=prom;
			cod_men=cod;
		}
		
		c++;
	}
	
	printf("el codigo de sucursal con menor promedio de sueldo:%d\n",cod_men);
	printf("Cantidad de empleados que tengan antiguedad >= 15 anios y < a 25 anios:%d",cant_emp);*/
	
//	30.1)
	/*int c,suc,e,N,dni,anio_ingreso,antiguedad=0,cant_emp=0,emp=0,sucM=0;
	float sue,sum,prom=0.0f,men=INT_MAX;	 	
	
	for(c=1;c<=3;c++){
		
		printf("suc:");
		scanf("%d",&suc);
		
		
		switch(suc){
			
			case 1:{
				sum=0.0f;
				printf("cantemp:");
				scanf("%d",&N);
				
				for(e=1;e<=N;e++){
					
					printf("dni,sue,anio_ingreso:");
					scanf("%d %f %d",&dni,&sue,&anio_ingreso);
					
					sum=sum+sue;
					emp++;
					antiguedad=2024-anio_ingreso;
					
					if(antiguedad >= 15 && antiguedad < 25 ){
						cant_emp++;
					}
				}
				
				if(emp=1){
					prom=sum;
				}else{
					prom=sum/emp;
				}
				
				break;		
			}
			
			case 2:{
				sum=0.0f;
				printf("cantemp:");
				scanf("%d",&N);
				for(e=1;e<=N;e++){
					
					printf("dni,sue,anio_ingreso:");
					scanf("%d %f %d",&dni,&sue,&anio_ingreso);
					
					sum=sum+sue;
					emp++;
					antiguedad=2024-anio_ingreso;
					
					if(antiguedad >= 15 && antiguedad < 25 ){
						cant_emp++;
					}
				}
				if(emp=1){
					prom=sum;
				}else{
					prom=sum/emp;
				}
				break;
			}
			
			case 3:{
				sum=0.0f;
				printf("cantemp:");
				scanf("%d",&N);
				
				for(e=1;e<=N;e++){
					
					printf("dni,sue,anio_ingreso:");
					scanf("%d %f %d",&dni,&sue,&anio_ingreso);
					
					sum=sum+sue;
					emp++;
					antiguedad=2024-anio_ingreso;
					
					if(antiguedad >= 15 && antiguedad < 25 ){
						cant_emp++;
					}
				}
				if(emp=1){
					prom=sum;
				}else{
					prom=sum/emp;
				}
				break;
			}
		}
		
		if(prom<men){
			men=prom;
			sucM=suc;
		}
		
	}
	
	printf("\nSucursal con el promedio menor de sueldos: %d \n",sucM);
	printf("\ncant. empleados con antiguedad >= 15 y < 25: %d",cant_emp);
	*/
//	31)
	/*int N,cod,rating_anual,c,i,sum=0,cant_rating;
	float prom=0,pol=0;
	char tipo;
	
	printf("\nIngrese la cantidad de programas: ");
	scanf(" %d",&N);
	
	for(c=1;c<=N;c++){
		printf("\nPrograma %d",c);
		printf("\nCodigo de programa: ");
		scanf(" %d",&cod);
		printf("\nTipo de programa(P-politico, I-interes general, N-noticiero):");
		scanf(" %c",&tipo);
		printf("\nTotal de rating en el año 2016: ");
		scanf(" %d",&rating_anual);
		
		tipo=toupper(tipo);
		
		
		switch(tipo){
			case 'P':{
				sum=sum+rating_anual;
				pol++;
				break;
			}
			case 'I':{
				if(rating_anual>8){
					cant_rating++;
				}
				break;
			}
			case 'N':{
				
				break;
			}
		}
	
	}
	prom=sum/pol;
	printf("\nCantidad de programas de interes general con mas de 8 puntos de rating: %d",cant_rating);
	printf("\nEl promedio de rating de los programas politcos: %.2f\n",prom);*/
	
//	32)
	/*int N,P,c,i;
	float sum=0,precio;
	
	printf("\nIngrese la cantidad de clientes: ");
	scanf(" %d",&N);
	
	for(c=1;c<=N;c++){
		printf("\nIngrese la cantidad de productos del cliente %d: ",N);
		scanf(" %d",&P);
		for(i=1;i<=P;i++){
			printf("\nIngrese el precio del producto %d:",i);
			scanf(" %f",&precio);
			
			sum=sum+precio;
		}
	}
	printf("\nEl monto recaudado: %.2f",sum);
	*/
	
	
	
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 4
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//	__puts__
//	*ejemplo
	/*char p[size]="Uno";
	char s[size]="Dos";
	puts(p);
	puts(s);
	*/
//	__puts-gets__
//	ejemplo 1
	/*char frase[100];
	printf("Introduzca cualquier cadena de caracteres: \n");
	gets(frase);
	puts(frase);
	printf("\nFin del Programa.\n");*/
	
//	ejemplo 2
	/*char nombre[30];
	char c;
	int i;
	printf("Hola! Como te llamas?\n");
	scanf("%s",nombre);
	c=nombre[0];
	printf("Inicial, %c\n",c);
	printf("Que tal estas, %s\n",nombre);
	
	i=0;
	while(nombre[i]!='\0'){
		printf("  %c\n",nombre[i]);
		i++;
	}
	printf("\n");*/
//	__strlen__
	/*char cadena[20]="hola como estas";
	int i,cant;
	cant=strlen(cadena);
	printf("\n %d",cant);*/

//	__strcpy__
	/*char cadena[20]="hola como estas";
	char copia[80];
	strcpy(copia,cadena);
	printf("\n %s",copia);*/
	
	/*char nom[20],mens[20];
	int nota;
	
	scanf("%s",nom);
	scanf("%d",&nota);
	
	if(nota<40){
		strcpy(mens,"desaprobado");
	}else{
		if(nota<70){
			strcpy(mens,"aprobado");
		}else{
			strcpy(mens,"promocionado");
		}
	}
	printf("\n %s estas %s",nom,mens);*/
	
//	__strcat__
	/*char h[100]="lopez, ";
	char l[6]="maria";
	strcat(h,l);
	printf("%s\n",h);*/
	
//	__ctype__
	
	
	
	
	
	
	return 0;
}

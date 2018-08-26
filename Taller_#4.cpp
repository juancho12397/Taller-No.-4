#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void Ejercicio_1();
void Ejercicio_2();
void Ejercicio_3();
void menu();

int main(){
       menu();
       return 0;
}

void menu(){

 int opcion=0;

do{
    printf("1. Ejercicio_1\n");
    printf("2. Ejercicio_2\n");
    printf("3. Ejercicio_3\n");

	printf("\n \n");
	printf("ingrese su opcion: \n");
	scanf("%d", &opcion);
    system("cls");

    switch(opcion){

    	 case 1: Ejercicio_1();
	     break;
	     case 2: Ejercicio_2();
	     break;
	     case 3: Ejercicio_3();
	     break;
	     case 0: exit(0);
	     break;
	     default: printf("opcion invalida \n");

	}
} while(opcion!=0);
}


void Ejercicio_1(){

 int a, *p;

 system("cls");
 printf("ingrese un valor para la variable:\n");
 scanf("%d", &a);

 while(a<0)
 {
    printf("Error el valor debe ser mayor que cero\n");
	scanf("%d", &a);
}

    system("cls");
    printf("a=%d\n", a);
    printf("La dirección de a es %p\n" , &a);
    printf("p=%p\n", p);
    printf("a=%d\n", *p);
    printf("El tamaño de *p es %d\n", sizeof(p));
    getch();
    system("cls");


}

void Ejercicio_2(){
    int longitud;
    char cadena[30], *pcadena;
    int canta=0, cante=0, canti=0, canto=0, cantu=0;
    printf("Ingrese una cadena de caracteres: \n ");
    fflush(stdin);
    fgets(cadena, 30, stdin);

    longitud = strlen(cadena)-1;
    pcadena = cadena;

    for(int i=0; i<longitud; i++){
        switch(*(pcadena+i)){
            case 'a': canta++; break;
            case 'e': cante++; break;
            case 'i': canti++; break;
            case 'o': canto++; break;
            case 'u': cantu++; break;
        }
    }

    printf("Vocal a: %d\n", canta);
    printf("Vocal e: %d\n", cante);
    printf("Vocal i: %d\n", canti);
    printf("Vocal o: %d\n", canto);
    printf("Vocal u: %d\n", cantu);
     getch();
     system("cls");
}

void Ejercicio_3(){


    int num1, num2, *pun1, *pun2, *pun3, suma=0;

    printf("ingrese dos variables tipo entero\n");
    scanf("%d %d",&num1, &num2);

    suma= num1+num2;
    printf("el resultado es:%d\n",suma);

    pun1=&num1;
    pun2=&num2;

    pun3=&suma;
    printf("direcion de num1 es:%p\n",pun1);
    printf("direcion de num2 es:%p\n",pun2);
    printf("direcion de suma es:%p\n",pun3);
   getch();
   system("cls");
}






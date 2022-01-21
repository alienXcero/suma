#include<stdio.h>

#include<stdlib.h>



void menu(){

printf("---------------------\n");
printf("|1.-SUMA   2.-RESTA\n|");
printf("|3.-MULT   4.-DIV    |\n");
printf(" --------------------\n");

}






int main(){

float a,b;


menu();



printf("dame un numero?:");
scanf("%g",&b);

printf("dame otro numero?:");
scanf("%g",&a);


printf("El resultado de la suma es: %g\n",(a+b));



return 0;

}


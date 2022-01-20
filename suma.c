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



printf("Dame un numero?:");
scanf("%g",&a);

printf("Dame otro numero?:");
scanf("%g",&b);


printf("el resultado de la suma es %g\n",(a+b));



return 0;

}


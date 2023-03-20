#include <stdio.h>
#include <math.h>

int main(){

double hipotenusa;
double cateto1;
double cateto2;

printf("\nInsira o cateto a: ");
scanf("\n%lf", &cateto1);

printf("\nInsira o cateto b: ");
scanf("\n%lf", &cateto2);

hipotenusa = sqrt( pow(cateto1, 2) + pow(cateto2, 2));

printf("\nHipotenusa = %lf",  hipotenusa);
    return 0;
}

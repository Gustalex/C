#include <stdio.h>
// se o return for double devemos mudar de void para double, int e assim por diante
double square(double x){
    return x*x;
}

int main (){
// return = returns a value back to a calling function
    double x = square(3.14);
    printf("%lf", x);

    return 0;
}

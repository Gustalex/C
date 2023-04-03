#include <stdio.h>

int findMax(int x , int y)
{
    /*if (x>y)
    {
        return x; 
    }
    else                //Esse bloco de codigo de if/else statemet pode ser substituido
    {                   // pela linha de codigo abaixo usando os ternary operators
        return y;
    }
    */
    
    return (x>y) ? x : y;
}

int main (){

    //ternary operator = shortcut to if/else when assigning/ returning a value
    // (condition) ? value if true : value if false


    int max = findMax(5, 4);
    printf("%d", max);
    return 0;
}

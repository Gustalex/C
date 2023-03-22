#include <stdio.h>

int main(){

    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);
    
    if (age >= 18){
        printf("You are now signed up!");  
    }

    // pode-se usar o else if statement para checar mais de uma condicao antes do else final
    else if(age == 0){
        printf("You can not singed up! You were just borned");
    }

    else if(age<0){
        printf("You havn't been borned yet");
    }

    /* se a condicao do if for falsa, e se nao houver um else, ex.: age == 12 o bloco de codigo
       sera skipado 
    */

    else {
        printf("You are too young to signed up!");
    }
}

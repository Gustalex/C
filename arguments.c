#include <stdio.h>

void birthday(char x [] , int y) //parameters 
{
    printf("\nHappy birthday dear %s!", x);
    printf("\nYou are %d years old", y);
}                                    // o nome dos arguments nao necessariamente precisa ser igual ao dos parametros                        

int main (){

    char name[] = "Gustavo";
    int age = 20;

    birthday(name, age); // arguments
 

    return 0;
}

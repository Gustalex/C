#include <stdio.h>

int main(){
char name[25]; //bytes 
    int age;

    printf("\nWhat's your name? ");
    //scanf("%s", &name);
    fgets(name,25, stdin); // this function reads white spaces

    printf("How old are you?");
    scanf("%d", &age);

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old", age);


    return 0;

}

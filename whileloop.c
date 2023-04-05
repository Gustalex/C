#include <stdio.h>
#include <string.h>

int main(){

    // while loop = repeats a section of code possibly unlimited times.
    // WHILE some condition remains true
    // a while loops might not execute at all

    char name[25];

    printf("\nWhat is your name?");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    while (strlen(name)==0)
    {
        printf("\nYou did not enter yor name");
        printf("\nWhat is your name?");
        fgets(name, 25, stdin);
        name[strlen(name)-1] = '\0';  //line of cod to get rid of the new line character at the ende of user input
    }
    

    printf("Hello %s", name);

    return 0;
}

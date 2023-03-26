#include <stdio.h>
#include <ctype.h>

int main (){

    char unit;
    float temp;

    printf("\n Is the temperatue in (F) or (C)");
    scanf("%c", &unit);

    unit = toupper(unit); //serve para o prgrama reconhecer tanto A quanto a.

    if(unit=='C'){
        printf("Enter the temperature in Celcius: ");
        scanf("%f", &temp);
        temp = (temp*9/5)+32;
        printf("\n Them temp in Farenheit is: %.1f", temp);
    }
    else if(unit =='F'){
        printf("Enter the temperature in Farenheit: ");
        scanf("%f", &temp);
        temp = (temp-32)*5/9;
        printf("The temperature in Celcius is; %1.f", temp);
    }
    else{
        printf("\n%c is not a valid unit of measurement", unit);
    }
        
   
    
    return 0;
}

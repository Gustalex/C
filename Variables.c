#include <stdio.h>

int main(){

    // Variable = Allocate space in memory to store a value.
    //            We refer to a variable's name to access the stored value.
    //            That variable now behaves as if it was the value it contains.
    //            BUT we need to declarate what type of data we are storing.

    int x; //declaration
    x = 123; //initialization
    int y = 123; // declaration + initialiation

    int age = 20;
    float gpa = 2.05; //floating point number 
    char grade = 'C'; //single character
    char name[] = "Gustavo"; // array of characters

    printf("My name is %s\n",name);    
    printf("I am %d years old\n",age);
    printf("My average grade is %c\n",grade);
    printf("My gpa is %f",gpa);
    return 0;

}
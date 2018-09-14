/*
 * This program will accommodate 3 numbers given by the user from the lowest to the highest.
 *
 * Alejandra Chávez Cruz
 * 13/sept/2018
 * a01411970@itesm.mx
 */

#include <stdio.h>

// The variables
void swap(int *X, int *Y){

    int a;

    if(*X > *Y){
        a = *X;
        *X = *Y;
        *Y = a;
    }
}

    int main() {
    // my variables.
    int X;
    int Y;
    int Z;

    // This is were the program asks for the numbers.
    printf("Give me a number:");
    scanf("%d", &X);
    printf("Give me another a number:");
    scanf("%d", &Y);
    printf("Give me one more number:");
    scanf("%d", &Z);

    // Here is were the swapping occurs.
    swap(&X, &Y);
    swap(&X, &Y);
    swap(&Y, &Z);

    // Here is were I give the new order.
    printf("The lowest number is: %d\a", X);
    printf("The number in the meddle is: %d\a", Y);
    printf("The highest number is: %d\a", Z);


    return 0;
}
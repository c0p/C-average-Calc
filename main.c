#include <stdio.h>

int main () {
    int InputAmount = 0;
    int UserInput;
    int AverageAmount = 0;
    int Total = 0;

    printf("Enter 0 to exit\n");

    do {
        printf("Input Amount: %d       Total Amount: %d        Average Amount: %d\n", InputAmount, Total, AverageAmount);
        scanf("%d", &UserInput);
        InputAmount++;
        Total += UserInput;
        AverageAmount = Total/InputAmount;



    }while( UserInput != 0 );




























   return 0;
}

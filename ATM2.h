#include <stdio.h>

int account(){
    printf("\nACCOUNT:\n");
    int accounttype;
    printf("1 - Savings Acount\t");
    printf("2 - Current Account\n");
    printf("option: ");
    scanf("%i", &accounttype);
}
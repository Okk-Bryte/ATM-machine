#include <stdio.h>
#include <stdlib.h>
#include "ATM2.h"
//Class Project on builing an ATM machine.

int main(){
    int balance;
    int pin;
    int transfer;
    int user_pin;
    int newtrans;//new transaction;

    printf("Input Your Personal Pin:\n");
    scanf("%i", &pin);
    printf("Enter Amount To Create Account:\n#");
    scanf("%i", &balance);
    printf("\n*** WELCOME TO BRYTE BANK ATM ***\n");
    printf("...Where Your Value is Valued...\n\n");

    printf("Please Enter Your Pin:\n");
    scanf("%i", &user_pin);

    if(pin != user_pin)
    {
        printf("\n...INVALID PIN!!!");
        return 0;
    }

    for(newtrans = 0; newtrans >= 0; newtrans++)
    {
        int option;

        printf("\nWHAT DO YOU WANT TO DO?: \n");
        printf("1 - Check Balance.\t");
        printf("2 - Deposit.\n");
        printf("3 - Withdraw.\t");
        printf("        4 - Transfer.\n");
        printf("option: ");
        scanf("%i", &option);

    switch(option)
    {
        case 1:
        if(option == 1)//check balance
        {
            int account();
            if(1 == account()){
                printf("\nYour Savings Account Balance Is: \n#%d\n", balance);
            }
            else if(2 == account()){
                printf("\nYour Current Account Balance Is: \n#%d\n", balance);
            }
        }
        break;

        case 2:
        if(option == 2)//deposit
        {
            int cashdeposit;
            int account();
            if(1 == account()){
                printf("\nHOW MUCH DO YOU WANT TO DEPOSIT?: \n#");
                scanf("%i", &cashdeposit);
            }
            else if(2 == account()){
                printf("\nHOW MUCH DO YOU WANT TO DEPOSIT?: \n#");
                scanf("%i", &cashdeposit);
            }
                if(cashdeposit > 0){
                    balance += cashdeposit;//balance = balance + deposit;
                    printf("Current Balance After Deposit:\n#%i\n", balance);
                }
                else{
                    printf("\n...Invalid Cash Deposit!!!\n");
                }

        }
        break;

        case 3:
        if(option == 3)//withdraw
        {
            int cashwithdraw;
            int account();
            if(1 == account()){
                printf("\nHOW MUCH DO YOU WANT TO WITHDRAW?: \n#");
                scanf("%i", &cashwithdraw);
            }
            else if(2 == account()){
                printf("\nHOW MUCH DO YOU WANT TO WITHDRAW?: \n#");
                scanf("%i", &cashwithdraw);
            }
                if(cashwithdraw <= balance){
                    balance -= cashwithdraw;//balance = balance - withdraw;
                    printf("Current Balance After Withdraw:\n#%i\n", balance);
                }
                else if(cashwithdraw > balance){
                    printf("You Don't Have Enough Money.\n...DECLINED...\n");
                }
                else{
                    printf("\n...Invalid Transaction!!!\n");
                    }
               
        }
        break;

        case 4:
        if(option == 4)//transfer
        {
            printf("ENTER AMOUNT TO TRANSFER:\n#");
            scanf("%i", &transfer);
            int acct_num;
            printf("ENTER THE ACCOUNT NUMBER OF THE BENEFICIARY:\n");
            scanf("%i", &acct_num);
            balance -= transfer;
            printf("Transfer Successfull!!");
            printf("Current Balance After Transfer:\n#%i\n", balance);
        }
        break;

        default:
        break;
    }

        printf("\nDO YOU WANT TO DO ANOTHER TRANSACTION?:\n");
        printf("1 - Yes. \t 2 - No.\n");
        printf("option: ");
        scanf("%i", &newtrans);
        if(newtrans != 1){
            printf("\n...THANK YOU FOR YOUR SERVICE!!!");
            break;
        }
    }

    return 0;
}
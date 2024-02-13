#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

typedef struct {
    int code;
    char name[50];
    char email[50];
    char cpf[20];
    char birthdayDate[20];
    char registerDate[20];
} Client;

typedef struct {
    int number;
    Client client;
    float balance;
    float limit;
    float totalBalance; //balance + limit
} Account;

void menu();
void infoClient(Client client);
void infoAccount(Account account);
void createAccount();
void makeWithdraw();
void makeDeposit();
void makeTransfer();
void listAccounts();
float updateTotalBalance(Account account);
Account getAccountbyCode(int code);
void withdraw(Account account, float value);
void deposit(Account account, float value);
void transfer(Account origin_account, Account destiny_account, float value);

static Account accounts[50];
static int accounts_counter = 0;
static int clients_counter = 0;

int main()
{
    menu();

    return 0;
}

void menu(){
    int opt = 0;

    printf("===============================\n");
    printf("============= ATM =============\n");
    printf("========= GEEK BANK ===========\n");
    printf("\n");
    printf("MENU:\n");
    printf("1 - Create Account.\n");
    printf("2 - Make Dithdraw.\n");
    printf("3 - Make Deposit.\n");
    printf("4 - Make Transfer.\n");
    printf("5 - List Accounts.\n");
    printf("6 - Log out from the system.\n");
    printf("\n");
    printf("Select an option from the menu: ");
    scanf("%d", &opt);
    getchar();

    switch(opt){
        case 1:
            createAccount();
            break;
        case 2:
            makeWithdraw();
            break;
        case 3:
            makeDeposit();
            break;
        case 4:
            makeTransfer();
            break;
        case 5:
            listAccounts();
            break;
        case 6:
            printf("See you soon!\n");
            sleep(2);
            exit(0);
        default:
            printf("Invalid option!\n");
            sleep(2);
            menu();
            break;
    }

}

void infoClient(Client client){
    printf("Code: %d\nName: %s\nBirthday Date: %s\nRegister: %s\n", client.code, strtok(client.name, "\n"), strtok(client.birthdayDate, "\n"), strtok(client.registerDate, "\n"));
}

void infoAccount(Account account){
    printf("Account number: %d\nClient: %s\nBirthday Date: %s\nRegister Date: %s\nTotal Balance: %.2f\n", account.number, strtok(account.client.name, "\n"), strtok(account.client.birthdayDate, "\n"), strtok(account.client.registerDate), "\n");
}

void createAccount(){
    //in progress...
}

void makeWithdraw(){
    //in progress...
}

void makeDeposit(){
    //in progress...
}

void makeTransfer(){
    //in progress...
}

void listAccounts(){
    //in progress...
}

float updateTotalBalance(Account account){
    return account.balance + account.limit
}

Account getAccountbyCode(int code){
    //in progress...
}

void withdraw(Account account, float value){
    //in progress...
}

void deposit(Account account, float value){
    //in progress...
}

void transfer(Account origin_account, Account destiny_account, float value){
    //in progress...
}

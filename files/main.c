#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void registration(void);
void reportSpreadsheet(void);
void nameSearch(void);

typedef struct data
{
    float wage;
    char address[50], Id[20], name[50], lastName[50], pNum[20];
}MEMBER;

int main()
{
    int op;

    do
    {
        system("cls");

        printf("---------------------------------------|MAIN MENU|---------------------------------------\n");

        printf("\n[1] - Registration");
        printf("\n[2] - Report Spreadsheet");
        printf("\n[3] - Name Searching");
        printf("\n[4] - Exit");
        printf("\nEnter an option: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            registration();
            break;
        case 2:
            reportSpreadsheet();
            break;
        case 3:
            nameSearch();
            break;
        case 4:
            break;
        default:
            printf("\nnInvalid input, try again.");
            break;
        }
    }
    while (op != 4);

    return 0;
}

void registration(void)
{
    char ans = ' ';
    MEMBER employee;

    FILE *fptr;
    fptr = fopen("MembershipDatabase", "ab");


    if (fptr == NULL)
    {
        printf("\nFile creation has failed.");
        system("pause");
    }

    else
    {
        do
        {
            system("cls");
            printf("------------------------------------|REGISTRATION TAB|------------------------------------\n");
            printf("\t\tPlease enter the following required information.");fflush(stdin);

            printf("\n\nName: ");
            gets(employee.name); fflush(stdin);

            printf("\nLast name: ");
            gets(employee.lastName); fflush(stdin);

            printf("\n\nCurrent address: ");
            gets(employee.address); fflush(stdin);

            printf("\n\nID number: ");
            gets(employee.Id); fflush(stdin);

            printf("\n\nPersonal phone number: ");
            gets(employee.pNum); fflush(stdin);

            printf("\n\nCurrent wage: ");
            scanf("%f", &employee.wage); fflush(stdin);

            fwrite(&employee, sizeof(MEMBER), 1, fptr);

            printf("\n\nData saved successfully.\n\n");
            system("pause");

            printf("\n\nWould you like to make another registration?");
            printf("[Y]es | [N]o: ");
        }
        while (getchar() == 'Y' || getchar() == 'y');
    }
    fclose(fptr);
}

void reportSpreadsheet(void)
{
    FILE *fptr;
    fptr = fopen("MembershipDatabase", "rb");

    int i = 0;
    MEMBER employee;

    if (fptr == NULL)
    {
        printf("\nFile reading has falied.");
        system("pause");
    }

    else
    {
        system("cls");

        printf("------------------------------------|REPORT TAB|------------------------------------\n");
        printf("\nIndex \t| Name \t\t| Last name \t\t|Address \t\t| Phone number \t\t| ID number \t\t| Current wage");

        while(fread(&employee, sizeof(MEMBER), 1, fptr))
        {
            printf("\n%d \t%s \t\t%s \t\t\t%s \t%s \t%s \t\t%.2f\n", i, employee.name, employee.lastName, employee.address, employee.pNum, employee.Id, employee.wage); i++;
        }
    }
    system("pause");
    fclose(fptr);
}

void nameSearch(void)
{

}

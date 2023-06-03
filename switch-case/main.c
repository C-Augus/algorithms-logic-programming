#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, w = 0, x = 0, y = 0, z = 0;
    int n;

    for (i = 0; i < 10; i++)
    {
        printf("Número do cliente: ");
        scanf("%d", &n);

        printf("Canal atribuido [4, 5, 7, 12]: ");
        scanf("%d", &n);

        switch (n)
        {
        case 4:
            w++;
            break;
        case 5:
            x++;
            break;
        case 7:
            y++;
            break;
        case 12:
            z++;
            break;
        default:
            printf("TV desligada.");
            getch();
            break;
        }

        system("cls");
    }

    printf("Canal com maior audiência: %d\n", highest(w, x, y, z));
    printf("Canal com menor audiência: %d", lowest(w, x, y, z));
    //Canais múltiplos em maior ou menor audiência não são computados.
    return 0;
}

int highest (w, x, y, z)
{
    int max, highest = 4;
    max = w;

    if (x > max)
    {
        max = x;
        highest = 5;
    }
    if (y > max)
    {
        max = y;
        highest = 7;
    }
    if (z > max)
    {
        max = z;
        highest = 12;
    }

    return highest;
}

int lowest (w, x, y, z)
{
    int min, lowest = 4;
    min = w;

    if (x < min)
    {
        min = x;
        lowest = 5;
    }
    if (y < min)
    {
        min = y;
        lowest = 7;
    }
    if (z < min)
    {
        min = z;
        lowest = 12;
    }

    return lowest;
}


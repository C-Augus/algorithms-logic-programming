#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    ///Ex. 1


    int i, x, y, result;
    int vetor [13];

    for (i = 0; i < 12; i++)
    {
    printf("Digite doze números.\n%dº número: ", i+1);
    scanf("%d%*c", &vetor[i]);
    system("cls");
    }

    printf("Digite duas posições desse número.\n\nX:");
    scanf("%d", &x);
    printf("Y:");
    scanf("%d", &y);

    result = vetor[x] + vetor[y];

    printf("\n\n%d + %d = %d", vetor[x], vetor[y], result);


    ///Ex. 2


    int vetor[10] = {0}, i = 0, j = 1;

    while (vetor[9] <= 0)
    {
        if (j % 2 != 0)
        {
            vetor[i] = j;
            printf("%d ", vetor[i]);
            i++;
        }
        j++;
    }


    ///Ex. 3


    int vetor[16] = {0}, i, x;

    for (i = 0; i < 16; i++)
    {
    printf("Digite dezesseis números.\n%dº número: ", i+1);
    scanf("%d%*c", &vetor[i]);
    system("cls");
    }
    for (i = 0; i < 8; i++)
    {
        x = vetor[i];
        vetor[i] = vetor[8 + i];
        vetor[8 + i] =x;
    }
    for (i = 0; i < 16; i++)
    {
        printf("%d ", vetor[i]);
    }


    ///Ex. 4


    int vetor[20] = {0}, numero, i, j = 0;

    for (i = 0; i < 20; i++)
    {
    printf("Digite vinte números.\n%dº número: ", i+1);
    scanf("%d%*c", &vetor[i]);
    system("cls");
    }

    printf("Digite um número: ");
    scanf("%d%*c", &numero);
    system("cls");

    for (i = 0; i < 20; i++)
    {
        if (vetor[i] == numero)
        {
            printf("Este número se encontra na posição %d\n", i);
            j++;
        }

    }

    if (j == 0)
    {
        printf("Não há esse número no vetor.");
    }


    ///Ex. 5


    int vetor[40] = {0}, i, qntd = 0;

    for (i = 0; i < 40; i++)
    {
    printf("Digite quarenta números.\n%dº número: ", i+1);
    scanf("%d%*c", &vetor[i]);
    system("cls");
    }

    for (i = 0; i < 40; i++)
    {
        if (vetor[i]%2 == 0)
        {
            qntd++;
        }
    }

    printf("Quantidade de números pares: %d", qntd);


    ///Ex. 6


    int vetor[40] = {0}, i, qntd = 0;

    for (i = 0; i < 40; i++)
    {
    printf("Digite quarenta números.\n%dº número: ", i+1);
    scanf("%d%*c", &vetor[i]);
    system("cls");
    }

    for (i = 0; i < 40; i++)
    {
        if (vetor[i] < 0)
        {
            vetor[i] = 0;
        }
    }


    ///Ex. 7


    int vetor1[6] = {1}, vetor2[6] = {0}, vetor3[12] = {0}, i, j = 0, d = 0;

    for (i = 0; i < 6; i++)
    {
    printf("Digite seis números para o primeiro vetor.\n%dº número: ", i+1);
    scanf("%d%*c", &vetor1[i]);
    system("cls");
    }
    for (i = 0; i < 6; i++)
    {
    printf("Digite seis números para o segundo vetor.\n%dº número: ", i+1);
    scanf("%d%*c", &vetor2[i]);
    system("cls");
    }
    for (i = 0; i < 12; i++)
    {
        if (i % 2 == 0)
        {
            vetor3[i] = vetor1[j];
            j++;
        }
        else
        {
            vetor3[i] = vetor2[d];
            d++;
        }
        printf("%d ", vetor3[i]);
    }


    ///Ex. 8


    int vetor1[11], vetor2[10], i;

    for (i = 0; i < 10; i++)
    {
    printf("Digite dez números.\n%dº número: ", i+1);
    scanf("%d%*c", &vetor1[i]);
    system("cls");
    }
    printf("Vetor obtido: ");
    for (i = 0; i < 10; i++)
    {
        vetor1[i+1] += vetor1[i];
        vetor2[i] = vetor1[i];
        printf("%d ", vetor2[i]);
    }


    return 0;
}

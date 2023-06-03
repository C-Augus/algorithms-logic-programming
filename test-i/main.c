#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float valProduto [10] = {120, 100, 78, 20, 190, 340, 56, 60, 560, 267}, valEstoque[5][10] = {0};
    int menor = pow(10, 5), i, j, q, aux = 0, qnt = 0, qntT = 0;
    int qntEstoque[5][10], vMenor[5] = {9, 9, 9, 9, 9};


    for (i = 0; i < 5; i++)
    {
        system("cls");
        printf("Referente ao %dº armazém, forneça a quantidade do...\n\n", i+1);

        for (j = 0; j < 10; j++)
        {
            printf("Produto nº %d: ", j+1);
            scanf("%d", &qntEstoque[i][j]);
            valEstoque[i][j] = valProduto[j] * (float)qntEstoque[i][j];
        }
    }

    system("cls");

    for (i = 0; i < 5; i++)
    {
        printf("Quantidade de produtos no %dº armazém: ", i+1);

        for (j = 0; j < 10; j ++)
        {
            qnt += qntEstoque[i][j];
        }

        if (qnt < menor)
        {
            menor = qnt; aux = 0;
            for (q = 0; q < 5; q++)
            {
                vMenor[q] = 9;
            }
            vMenor[aux] = i; aux++;
        }
        else if (qnt == menor)
        {
            vMenor[aux] = i; aux++;
        }

        qntT += qnt;

        printf("%d\n", qnt); qnt = 0;
    }

    printf("\nQuantidade total de todos or armazéns: %d\n", qntT);

    if (vMenor[1] == 9)
    {
        printf("\nO menor estoque armazenado é o %dº.", vMenor[0]+1);
    }
    else
    {
        printf("\nOs menores estoques armazenados são: ");
        for (q = 0; q < aux; q++)
        {
            printf("\n> %d", vMenor[q]+1);
        }
    }

    printf("\n\nNr\tCusto\t\tArmazém 1\tArmazém 2\tArmazém 3\tArmazém 4\tArmazém 5\n");
    for (j = 0; j < 10; j++)
    {
        printf("%d\t%.2f", j+1, valProduto[j]);
        for (i = 0; i < 5; i++)
        {
            printf("\t\t%.2f", valEstoque[i][j]);
        }
        putchar('\n');
    }

    return 0;
}

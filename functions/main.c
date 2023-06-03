#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    ///Ex. 1


const float pi = 3.14159265359;

void function (float r)
{
    float v;
    v = (4 * pi * pow(r, 3)) / 3;
}
int main()
{
    float r;

    printf("Raio: ");
    scanf("%f%*c", &r);

    function(r);

    return 0;
}


    ///Ex. 2


float function (float n1, float n2, float n3, char n)
{
    float media;

    switch(n)
    {
    case ('A'):
        media = (n1 + n2 + n3) / 3;
        break;
    case ('P'):
        media = n1 / 5 + n2 / 3 + n3 / 2;
        break;
    case('H'):
        media = 3 / (1 / n1 + 1 / n2 + 1 / n3);
        break;
    }
    return media;
}
int main()
{
    float n1, n2, n3, media;
    char n;

    printf("Primeira nota: ");
    scanf("%f%*c", &n1);

    printf("\nSegunda nota: ");
    scanf("%f%*c", &n2);

    printf("\nTerceira nota: ");
    scanf("%f%*c", &n3);

    printf("\nTipo de media (A, P ou H): ");
    n = getch();

    media = function(n1, n2, n3, n);

    printf("\nMedia: %.2f", media);
}


    ///Ex. 3


char* function(int n)
{
    if ((n == 2) || (n == 3) || (n == 5) || (n == 7))
    {
        return "Verdadeiro.";
    }
    else if ((n % 2 != 0) && (n % 3 != 0) && (n % 5 != 0) && (n % 7 != 0))
    {
        return "Verdadeiro.";
    }
    else
    {
        return "Falso.";
    }
}
int main ()
{
    int n;
    printf("Digite um número inteiro e positivo: ");
    scanf("%d%*c", &n);

    printf("%s", function(n));
}


    ///Ex. 4


float a, b, c, x;

void function (float a, float b, float c)
{
    if (pow(b, 2) - 4 * a * c < 0)
    {
        printf("\nNao ha raiz real.");
    }
    else if (pow(b, 2) - 4 * a * c == 0)
    {
        x = (-b) / (2 * a);
        printf("Unica raiz: %.2f", x);
    }
    else
    {
        x = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        printf("Primeira raiz: %.2f", x);

        x = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
        printf("\nSegunda raiz: %.2f", x);
    }
}
int main ()
{
    printf("Valor de a: ");
    scanf("%f%*c", &a);

    printf("Valor de b: ");
    scanf("%f%*c", &b);

    printf("Valor de c: ");
    scanf("%f%*c", &c);

    function(a, b, c);
}


    ///Ex. 5


int t;

void function(int t)
{
    int th = 0, tm = 0;

    while (t >= 3600)
    {
        t -= 3600; th++;
    }
    printf("%d H, ", th);
    while (t >= 60)
    {
        t -= 60; tm++;
    }
    printf("%d M %d S", tm, t);
}
int main()
{
    printf("Tempo de duração da fábrica em segundos: ");
    scanf("%d", &t);

    function(t);
}


    ///Ex. 6


int function(int d, int m, int a)
{
    d += m * 28 + (2021 - a) * 365;
    return d;
}
int main()
{
    int d, m, a;

    printf("Dia: ");
    scanf("%d", &d);

    printf("\nMes: ");
    scanf("%d", &m);

    printf("\nAno: ");
    scanf("%d", &a);

    d = function(d, m, a);

    printf("Dias totais: %d.\n", d);

    return 0;
}


    ///Ex. 7

char* function (int n)
{
    int i, j = 0;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            j += i;
        }
    }
    if (n == j)
    {
        return "Perfeito.";
    }
    else
    {
        return "Nao perfeito.";
    }
}
int main()
{
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("%s", function(n));
}


    ///Ex. 8


char* function(int i)
{
    if ((i >= 5) && (i < 8))
    {
        return "Infantil A.";
    }
    if ((i >= 8) && (i < 11))
    {
        return "Infantil B.";
    }
    if ((i >= 11) && (i < 14))
    {
        return "Juvenil A.";
    }
    if ((i >= 14) && (i < 18))
    {
        return "Juvenil B.";
    }
    if (i >= 18)
    {
        return "Adulto.";
    }
}
int main()
{
    int i;
    printf("Digite a idade: ");
    scanf("%d", &i);

    printf("\nCategoria: %s\n", function(i));
}


    ///Ex. 9


char* function (int n)
{
    if (n > 0)
    {
        return "E positivo.";
    }
    else if (n < 0)
    {
        return "E negativo.";
    }
}
int main ()
{
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("%s", function(n));
}


    ///Ex. 10


char* function(int n)
{
    if (n % 2 == 0)
    {
        return "Par.";
    }
    else
    {
        return "Impar.";
    }
}
int main()
{
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("%s", function(n));
}

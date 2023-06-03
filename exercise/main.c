#include <stdlib.h>
#include <stdio.h>

int main()
{
    float salhoras, horastrab,inss,irrf;
    int i,n;
    float salbruto,salliq,descontos;

    printf("\n Informe a quantidade de funcionários a serem processados");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
      printf("\n Informe o Salario Horas");
      scanf("%f",&salhoras);
      printf("\n Informe Horas Trabalhadas");
      scanf("%f",&horastrab);

      salbruto = (salhoras * horastrab);

      //  Encontrando a Alquota para o desconto do INSS

      if(salbruto <= 1100)
      {
         inss = salbruto *0.075;


      }else if(salbruto <= 2204.48)
      {

      inss = salbruto * 0.09;
      }else if (salbruto <= 3305.22)
      {
      inss = salbruto * 0.12;

      }else if(salbruto >= 6433.57)
      {
       inss = 900.69;
      }else {

      inss = salbruto * 0.14;

      }

   // Encontrando Aliquota do Desconto referente ao IRRF

     if(salbruto <= 1903.98)
     {
         irrf = 0;
     }else if(salbruto <= 2826.65)
     {
         irrf = salbruto *0.075;
     }else if(salbruto <=3751.05)
     {
         irrf = salbruto * 0.15;
     }else if(salbruto <= 4664.68)
     {
         irrf = salbruto * 0.225;
     }else {
         irrf =salbruto * 0.275;
      }

      printf("\n O valor do Desconto do INSS %.2f",inss);
      printf("\n O valor do Desconto do IRRF %.2f",irrf);
      descontos = (inss +irrf);
      salliq = salbruto - descontos;
      printf("\n O valor do salario Liquido  %.2f",salliq);
      }


return 0;
}

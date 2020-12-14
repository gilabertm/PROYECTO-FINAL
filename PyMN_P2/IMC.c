#include <stdlib.h>
#include <stdio.h>

int main()
{
 float altura, masa;
 float IMC;

    printf("Digite tu altura (en metros): ");
    scanf("%f", &altura);
    printf("Digite tu peso (en kilogramos): ");
    scanf("%f", &masa);

    IMC = masa/(altura*altura);

    printf("Tu indice de masa corporal es: ", IMC );

    if (IMC<18.5)
        printf("Usted cuenta con peso bajo");
     else if (18.5<=IMC&&IMC<=24.9)
        printf("Usted cuenta con peso normal");
     else if (25<=IMC&&IMC<=29.9)
        printf("Usted cuenta con sobrepeso");
     else if (30<=IMC&&IMC<=34.5)
        printf("Cuenta obesidad tipo 1");
     else if (35<=IMC&&IMC<=39.9)
        printf("Cuenta con obesidad tipo 2");
     else if (IMC>=40)
        printf("Cuenta con hiperobesidad");

return 0;

}

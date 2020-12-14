#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    const double Pi = 3.14159;
    double radio = 0;
    double volumen = 0;

    printf("Ingrese el radio : ");
    scanf("%lf", &radio);
    volumen = (4 / 3)* Pi * pow(radio, 3);
    printf("\nEl volumen de la esfera es.\n\n", volumen, 163);
    return 0;
}

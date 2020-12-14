#include<stdio.h>
#include<conio.h>
int main() {
  float W, MASA;
  float G = 9.8;
    printf("Ingrese el peso: \n");
    scanf("%f", &MASA);
    W=MASA*G;
    printf("El resultado de la fuerza de atraccion: %f\n", W);
  getch();
  return 0;
}

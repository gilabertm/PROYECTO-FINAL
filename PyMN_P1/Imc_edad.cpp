#include<stdio.h>
#include<conio.h>
int main() {
  float PESO, IMC, ESTATURA;
  printf("Ingrse su peso: \n");
  scanf("%f", &PESO);
  printf("Ingrese su estatura: \n");
  scanf("%f", &ESTATURA);
  IMC = PESO / (ESTATURA*ESTATURA);
  printf("Su IMC es de: %f\n", IMC);
  getch();
  return 0;
}

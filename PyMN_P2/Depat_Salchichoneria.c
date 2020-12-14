#include <stdio.h>
#include <conio.h>
int main() {
  int opc;
  float IMPORTE, DSCTO, TOTAL;
  printf("Indique el departamento en el que desea comprar con numero: \n 1.Perfumeria \n 2.Salchichoneria\n 3.Carniceria\n 4.Limpieza\n" );
  scanf("%d", &opc);
  switch (opc) {
    case 1: printf("Indique el importe del articulo: \n");
    scanf("%f", &IMPORTE);
    DSCTO=(IMPORTE*.20);
    TOTAL = (IMPORTE-DSCTO+.10);
    printf("El total a pagar es: %f \n", TOTAL);
    break;
    case 2: printf("Indique el importe del articulo: \n");
    scanf("%f", &IMPORTE);
    DSCTO=(IMPORTE*.40);
    TOTAL = (IMPORTE-DSCTO+.10);
    printf("El total a pagar es: %f \n", TOTAL);
    break;
    case 3: printf("Indique el importe del articulo: \n");
    scanf("%f", &IMPORTE);
    DSCTO=(IMPORTE*.20);
    TOTAL = (IMPORTE-DSCTO+.10);
    printf("El total a pagar es: %f \n", TOTAL);
    break;
    case 4: printf("Indique el importe del articulo: \n");
    scanf("%f", &IMPORTE);
    DSCTO=(IMPORTE*.35);
    TOTAL = (IMPORTE-DSCTO+.10);
    printf("El total a pagar es: %f \n", TOTAL);
  }
  return 0;
}

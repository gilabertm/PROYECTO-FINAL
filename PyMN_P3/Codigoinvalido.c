#include <stdio.h>
int main() {
  int c1, c2, i=0;
  do {
    printf("Digite un numero entero: \n");
    scanf ("%d", &c1);
    printf("Digite numero entero: \n");
    scanf("%d", &c2);
    if (c1!=c2){
      i=i+1;
      c2=c1;
    } else {
    printf("Error, codigo invalido\n");
    break;
    }
  } while(i<4);
  return 0;
}

#include <stdio.h>
#include <conio.h>
int n;
int main() {
  printf("Digite un numero entero y positivo\n");
  scanf("%d",&n);
    if (n%2==0) {
    printf("El dato es par\n");
  }
  else {
      printf("El dato es impar\n");
  }
  getch();
  return 0;
}

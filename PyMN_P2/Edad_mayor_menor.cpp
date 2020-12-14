#include<stdio.h>
int main() {
int edad;
printf("¿Cuantos años tienes?: \n");
scanf("%d", &edad);
if (edad<18) {
  printf("Eres menor de edad.\n");
}
else {
  printf("Eres mayor de edad.\n");
}
  return 0;
}

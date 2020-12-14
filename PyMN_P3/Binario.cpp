#include <stdio.h>
#include <conio.h>
int main() {
  int z,x, num, n2=0;
  int binario[50];
  binario[0]=0;

  printf("Digite numero entero:\n");
  scanf("%d", &num);

  for (x=0; x<50; x++) {
    binario[x]=num%2;
    num=num/2;
    if (num==0)
    break;
  }

  for (z=x; z>=0; z--) {
    printf("%d", binario[z]);
  }

  getch();
  return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d;
    float x,y;

    printf("Digite coeficiente a: ");
    scanf("%d",&a);

    while (a== 0) {
        printf("Digite  coeficiente a: ");
        scanf("%d",&a);
    }

    printf("Digite el  coeficiente b: ");
    scanf("%d",&b);
    printf("Digite el coeficiente c: ");
    scanf("%d",&c);

    d = b*b-4*a*c;
    if (d > 0) {
        x = (-b+sqrt(d))/(2*a);
        y = (-b-sqrt(d))/(2*a);
        printf("x1 = %.2f\n",x);
        printf("x2 = %.2f\n",y);
    }
    else if (d == 0) {
        x = (-b)/(2*a);
        printf("x1 = %.2f\n",x);
    }
    else
        printf("No tiene solucion");

    return 0;
}

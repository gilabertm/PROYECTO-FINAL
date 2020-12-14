
#include <stdio.h>
#include <math.h>

float derivdelante1(float h, float (xi));
float derivatras1(float h, float(xi));
float derivcentrada1(float h, float (xi));
float derivdelante2(float h, float (xi));
float derivatras2(float h, float(xi));
float derivcentrada2(float h, float (xi));
float derivdelante3(float h, float (xi));
float derivatras3(float h, float(xi));
float derivcentrada3(float h, float (xi));
float derivdelante4(float h, float (xi));
float derivatras4(float h, float(xi));
float derivcentrada4(float h, float (xi));
float ERROR(float (xi), float h);

int main()
{
    int opcion;
    printf("Introduzca la aproximacion de h para calcular\n");
    printf("1.h=0.5\n2.h=0.2\n3.h=0.1\n4.h=0.01\n");
    scanf("%d",&opcion);
    float xi,h,ERROR;

    switch(opcion)
    {
        case 1:
          printf("Evaluacion hacia adelante: %f ",derivdelante1(xi,h));
          ERROR=fabs((0.2489-derivdelante1(xi,h))/0.2489)*100;
          printf("\nEl error es--> %f ",ERROR);
          printf("\nEvaluacion centrada: %f ",derivcentrada1(xi,h));
          ERROR=fabs((0.2489-derivcentrada1(xi,h))/0.2489)*100;
          printf("\nEl error es--> %f ",ERROR);
          printf("\nEvaluacion hacia atras: %f ",derivatras1(xi,h));
          ERROR=fabs((0.2489-derivatras1(xi,h))/0.2489)*100;
          printf("\nEl error es--> %f ",ERROR);
          break;
        case 2:
          printf("\nEvaluacion hacia adelante: %f ",derivdelante2(xi,h));
          ERROR=fabs((0.2489-derivdelante2(xi,h))/0.2489)*100;
          printf("\nEl error es--> %f ",ERROR);
          printf("\nEvaluacion centrada:%f ",derivcentrada2(xi,h));
          ERROR=fabs((0.2489-derivcentrada2(xi,h))/0.2489)*100;
          printf("\nEl error es--> %f ",ERROR);
          printf("\nEvaluacion hacia atras: %f ",derivatras2(xi,h));
          ERROR=fabs((0.2489-derivatras2(xi,h))/0.2489)*100;
          printf("\nEl error es--> %f ",ERROR);
          break;
        case 3:
          printf("\nEvaluacion hacia adelante: %f ",derivdelante3(xi,h));
          ERROR=fabs((0.2489-derivdelante3(xi,h))/0.2489)*100;
          printf("\nEl error es--> %f ",ERROR);
          printf("\nEvaluacion centrada:%f ",derivcentrada3(xi,h));
          ERROR=fabs((0.2489-derivcentrada3(xi,h))/0.2489)*100;
          printf("\nEl error es--> %f ",ERROR);
          printf("\nEvaluacion hacia atras: %f ",derivatras3(xi,h));
          ERROR=fabs((0.2489-derivatras3(xi,h))/0.2489)*100;
          printf("\nEl error es--> %f ",ERROR);
          break;
        case 4:
          printf("\nEvaluacion hacia adelante: %f ",derivdelante4(xi,h));
          ERROR=fabs((0.2489-derivdelante4(xi,h))/0.2489)*100;
          printf("\nEl error es--> %f ",ERROR);
          printf("\nEvaluacion centrada:%f ",derivcentrada4(xi,h));
          ERROR=fabs((0.2489-derivcentrada4(xi,h))/0.2489)*100;
          printf("\nEl error es--> %f ",ERROR);
          printf("\nEvaluacion hacia atras: %f ",derivatras4(xi,h));
          ERROR=fabs((0.2489-derivatras4(xi,h))/0.2489)*100;
          printf("\nEl error es--> %f ",ERROR);
          break;
    }
}
float derivdelante1(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.5;
    fxi=1-exp(-xi/0.2);
    aprox1=1-exp(-(xi+h)/0.2);
    aprox2=1-exp(-(xi+(2*h))/0.2);
    deriv=(-aprox2+4*aprox1-3*fxi)/(2*h);
    return deriv;
}
float derivatras1(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.5;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi-h)/0.2);
    aprox2 = 1-exp(-(xi-(2*h))/0.2);
    deriv= (3*fxi-4*aprox1+aprox2)/(2*h);
    return deriv;
}
float derivcentrada1(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv, aprox3, aprox4;
    xi=0.6;
    h=0.5;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi+h)/0.2);
    aprox2 = 1-exp(-(xi+(2*h))/0.2);
    aprox3= 1-exp(-(xi-h)/0.2);
    aprox4 = 1-exp(-(xi-(2*h))/0.2);
    deriv = (-aprox2+8*aprox1-8*aprox3+aprox4)/(12*h);
    return deriv;
}
float derivdelante2(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.2;
    fxi=1-exp(-xi/0.2);
    aprox1=1-exp(-(xi+h)/0.2);
    aprox2=1-exp(-(xi+(2*h))/0.2);
    deriv=(-aprox2+4*aprox1-3*fxi)/(2*h);
    return deriv;
}
float derivatras2(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.2;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi-h)/0.2);
    aprox2 = 1-exp(-(xi-(2*h))/0.2);
    deriv= (3*fxi-4*aprox1+aprox2)/(2*h);
    return deriv;
}
float derivcentrada2(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv, aprox3, aprox4;
    xi=0.6;
    h=0.2;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi+h)/0.2);
    aprox2 = 1-exp(-(xi+(2*h))/0.2);
    aprox3= 1-exp(-(xi-h)/0.2);
    aprox4 = 1-exp(-(xi-(2*h))/0.2);
    deriv = (-aprox2+8*aprox1-8*aprox3+aprox4)/(12*h);
    return deriv;
}
float derivdelante3(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.1;
    fxi=1-exp(-xi/0.2);
    aprox1=1-exp(-(xi+h)/0.2);
    aprox2=1-exp(-(xi+(2*h))/0.2);
    deriv=(-aprox2+4*aprox1-3*fxi)/(2*h);
    return deriv;
}
float derivatras3(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.1;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi-h)/0.2);
    aprox2 = 1-exp(-(xi-(2*h))/0.2);
    deriv= (3*fxi-4*aprox1+aprox2)/(2*h);
    return deriv;
}
float derivcentrada3(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv, aprox3, aprox4;
    xi=0.6;
    h=0.1;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi+h)/0.2);
    aprox2 = 1-exp(-(xi+(2*h))/0.2);
    aprox3= 1-exp(-(xi-h)/0.2);
    aprox4 = 1-exp(-(xi-(2*h))/0.2);
    deriv = (-aprox2+8*aprox1-8*aprox3+aprox4)/(12*h);
    return deriv;
}
float derivdelante4(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.01;
    fxi=1-exp(-xi/0.2);
    aprox1=1-exp(-(xi+h)/0.2);
    aprox2=1-exp(-(xi+(2*h))/0.2);
    deriv=(-aprox2+4*aprox1-3*fxi)/(2*h);
    return deriv;
}
float derivatras4(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.01;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi-h)/0.2);
    aprox2 = 1-exp(-(xi-(2*h))/0.2);
    deriv= (3*fxi-4*aprox1+aprox2)/(2*h);
    return deriv;
}
float derivcentrada4(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv, aprox3, aprox4;
    xi=0.6;
    h=0.01;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi+h)/0.2);
    aprox2 = 1-exp(-(xi+(2*h))/0.2);
    aprox3= 1-exp(-(xi-h)/0.2);
    aprox4 = 1-exp(-(xi-(2*h))/0.2);
    deriv = (-aprox2+8*aprox1-8*aprox3+aprox4)/(12*h);
    return deriv;
}

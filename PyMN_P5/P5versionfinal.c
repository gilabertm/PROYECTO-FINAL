#include <stdio.h>
#include <math.h>

float fn1(float x_in),fn2(float x_in), ERROR_RELATIVO(float va,float vn);
float bise(float a, float b), FALSA1(float a, float b), FALSA2(float a, float b);
float va, vn, a,b;
int i, iteraciones, metodo;

int main(){

    printf("Seleccione el metodo a utilizar\n");
    printf("1.Biseccion           2.Falsa posicion\n");
    scanf("%d",&metodo);
    switch(metodo){
        case 1:
        printf("Digite el numero de iteraciones\n");
        scanf("%d",&iteraciones);
        printf("\n");
        a=-3;
        b=-2;
        vn=0;
        va=0;
        printf("i            xi           a             b            e\n");
        for(i=1; i<=iteraciones; i++){
          printf("%d       %f      %f     %f      %f\n",i,bise(a,b),a,b,ERROR_RELATIVO(va,vn));
          if((fn1(a)*fn1(bise(a,b)))<0){
                b=bise(a,b);
                va=b;
                vn=bise(a,va);
            }
            else{
              a=bise(a,b);
              va=a;
              vn=bise(va,b);
            }
        }
        printf("\n");
        a=1;
        b=2;
        vn=0;
        va=0;
        printf("   i            xi          a         b        e\n");
        for(i=1; i<=iteraciones; i++){
            printf("%d       %f      %f     %f    %f\n",i,bise(a,b),a,b,ERROR_RELATIVO(va,vn));
            if((fn2(a)*fn2(bise(a,b)))<0){
                b=bise(a,b);
                va=b;
                vn=bise(a,va);
            }
            else{
                a=bise(a,b);
                va=a;
                vn=bise(va,b);
            }
        }
        break;
        case 2:
        printf("Digite el numero de iteraciones\n");
        scanf("%d",&iteraciones);
        printf("\n");
        a=-3;
        b=-2;
        vn=0;
        va=0;
        printf("i        xi           a                b                e           f(a)           f(b)\n");
        for(i=1; i<=iteraciones; i++){
            printf("%d       %f        %f       %f      %f      %f     %f \n",i,FALSA1(a,b),a,b,ERROR_RELATIVO(va,vn),fn1(a),fn1(b));
            if((fn1(a)*fn1(FALSA1(a,b)))<0){
                b=FALSA1(a,b);
                va=b;
                vn=FALSA1(a,va);
            }
            else{
                a=FALSA1(a,b);
                va=a;
                vn=FALSA1(va,b);

            }
        }
        printf("\n");
        printf("\n");
        a=1;
        b=2;
        vn=0;
        va=0;
        printf("i           xi               a              b               e              f(a)          f(b)\n");
        for(i=1; i<=iteraciones; i++){
        printf("%d         %f         %f       %f       %f        %f        %f \n",i,FALSA2(a,b),a,b,ERROR_RELATIVO(va,vn),fn2(a),fn2(b));
        if((fn2(a)*fn2(FALSA2(a,b)))<0){
            b=FALSA2(a,b);
            va=b;
            vn=FALSA2(a,va);
        }
        else{
            a=FALSA2(a,b);
            va=a;
            vn=FALSA2(va,b);

        }
       }

return 0;
}
}

float fn1(float x_in){
    float fx;
    fx= (2*(x_in)*cos(2*x_in))-pow((x_in+1),2);
    return fx;
}
float bise (float a, float b){
    float xi;
    xi=((a+b)/2);
    return xi;
}
float fn2(float x_in){
    float fx;
    fx= log(fabs(x_in))+pow(x_in,2)-4;
    return fx;
}
float ERROR_RELATIVO(float va, float vn){
    float epsilon;
    epsilon= fabs((vn-va)/vn)*100;
    return epsilon;
}
float FALSA1(float a, float b){
    float xi;
    xi=b-((fn1(b)*(a-b))/(fn1(a)-fn1(b)));
    return xi;
}
float FALSA2(float a, float b){
    float xi;
    xi=b-((fn2(b)*(a-b))/(fn2(a)-fn2(b)));
    return xi;
}

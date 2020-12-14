#include <stdio.h>
#include <math.h>
float f1(float x)
{
return 8*sin(x)*exp(-x)-1;
}
float df1(float x)
{
return -8*sin(x)*exp(-x)+8*cos(x)*exp(-x); }
float f2(float x)
{
return 2*x*x*x -11*x*x+17.7*x-5;
}
float df2(float x)
{
return 6*x*x-22*x+17.7;
}
float ERROR_ABSOLUTO(float x1,float x0)
{
float EA;
EA= (x1-x0)/x1;
if (EA<0)       EA=-EA;
return EA*100;
}
void newtonRaphson()
{
float x0,x1;
int i=0,imax;
float EA=100;
float ERROR;
printf("Digite cuanto vale  x0: ");
scanf("%f",&x0);    //0
printf("Digite cuanto vale el ERROR: ");
scanf("%f",&ERROR);   //0.001
printf("Digite la cantidad maxima de iteraciones: ");
scanf("%d",&imax);      //10
printf(" i     xi          EA\n");
printf(" %d     %f \n",i,x0);
while  ((EA>ERROR)&&(i<imax))
{
x1=x0-f2(x0)/df2(x0);   //metodo de newtonRaphson
EA=ERROR_ABSOLUTO(x1,x0);
i=i+1;
printf(" %d     %f  %f \n",i,x1,EA);               x0=x1;
 }
  }
void secante()
{
float x0,x1,x2;
float ERROR,EA=100;
int imax,i=0;
float df;
printf("Digite cuanto vale x0: ");
scanf("%f",&x0);
printf("Digite cuanto vale  x1: ");
scanf("%f",&x1);
printf("Digite cuanto vale el  ERROR: ");
scanf("%f",&ERROR);
printf("Digite la cantidad maxima  de iteraciones: ");
scanf("%d",&imax);
printf("i    xi      xi+1       f'(xi)     EA\n");
printf("%d %f  %f   \n",0,x0,x1);
while ((EA>ERROR)&&(i<imax))
{
df= (f2(x0)-f2(x1))/(x0-x1);
x2=x1-f2(x1)*(x0-x1)/(f2(x0)-f2(x1));   //metodo secante
EA=ERROR_ABSOLUTO(x2,x1);
i=i+1;
printf("%d %f  %f   %f  %f \n",i,x1,x2,df,EA);                  x0=x1;
x1=x2;
}
}
int main()
{
newtonRaphson();
secante();
return 0;
}

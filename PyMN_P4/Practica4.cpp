#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int datosarreglos (int *arreglo, int t);
int datosimpresion (int *arreglo, int t);
int datosaleatorio (int *arreglo, int t);
int impresionale (int *arreglo, int t);
int sumarreglos (int *arreglo, int t);
int datosmatriz(int arre[][100], int f, int c);
int suma_unarreglo(int *arreglo, int t);
int matriz(int arre[][100], int f, int c);
int Lmatriz(int arre[][100], int f, int columnas);
int datoa(int arre[][100], int f1, int c1);
int datob(int arra[][100], int f2, int c2);
int sumadosmatrices(int arrb[][100], int f1, int c1);
int m(int arrb[][100], int f1, int c1);
int arre[100][100],arra[100][100],arrb[100][100];
int problema,j,t,i,f,c,f1,c1,f2,c2;
int suma=0;
int arreglo1[100], arreglo2[100], arreglo3 [100], arreglo4[100];

int main()
{
    printf ("Indique cual es el problema\n");
    scanf("%d",&problema);
    switch (problema){
        case 1:
        	printf("Ingrese el tamaño de los Arreglos\n");
        	scanf("%d",&t);
        	printf("Ingrese elementos del Arreglo 1 (%d): \n",t);
        	datosarreglos (arreglo1,t);
        	printf("Ingrese numeros del Arreglo 2 (%d): \n",t);
        	datosarreglos (arreglo2,t);
        	printf("arreglo 1: \n");
        	datosimpresion (arreglo1,t);
        	printf("arreglo 2: \n");
        	datosimpresion (arreglo2,t);
        	break;
        case 2:
        	printf("Ingrese tamaño de los Arreglos\n");
        	scanf("%d",&t);
        	printf("arreglo 1: \n");
        	impresionale(arreglo1,t);
        	printf("arreglo 2: \n");
        	impresionale(arreglo2,t);
        	break;
        case 3:
        	printf("Ingrese tamaño de los Arreglos\n");
        	scanf("%d",&t);
        	printf("Ingrese numeros de Arreglo 1 (%d): \n",t);
        	datosarreglos (arreglo1,t);
        	printf("Ingrese numeros de Arreglo 2 (%d): \n",t);
        	datosarreglos (arreglo2,t);
        	printf("La suma de los elementos vectoriales es: \n");
        	sumarreglos (arreglo3,t);
        	break;
        case 4:
        	printf("Ingrese tamaño de Arreglos\n");
        	scanf("%d",&t);
        	printf("Ingrese numeros de Arreglo 1 (%d): \n",t);
        	datosarreglos (arreglo1,t);
        	printf("La suma del Arreglo es  ");
        	suma_unarreglo (arreglo4,t);
        	printf("\n");
        	break;
        case 5:
        	printf ("Ingrese numero de Filas\n");
        	scanf("%d",&f);
        	printf ("Ingrese numero de Columnas\n");
        	scanf("%d",&c);
        	printf("\n");
        	printf ("Matriz final\n");
        	matriz(arre,f,c);
        	printf("\n");
        	break;
        case 6:
        	printf("Ingrese numero de Filas\n");
        	scanf("%d",&f);
        	printf ("Ingrese numero de Columnas\n");
        	scanf("%d",&c);
        	Lmatriz(arre,f,c);
        	printf("\n");
        	break;
        case 7:
        	printf("Ingrese numero de filas de la matriz 1\n");
        	scanf("%d",&f1);
        	printf ("Ingrese numero de columnas de la matriz 1\n");
        	scanf("%d",&c1);
        	printf("Ingrese numero de filas de la matriz 2\n");
        	scanf("%d",&f2);
        	printf ("Ingrese numero de columnas de la matriz 2\n");
        	scanf("%d",&c2);
        	if (f1==f2 && c1==c2) {
            	printf("Matriz 1\n");
            	datoa(arre,f1,c1);
            	printf("Matriz 2\n");
            	datob(arrb,f2,c2);
            	printf("Al realizar la suma de  matrices el resultado es :\n");
            	sumadosmatrices(arrb,f1,c1);
            	printf("\n");
        	}else{
            	printf("Mal los datos\n");
        	}
        	break;
        case 8:
        	printf("Ingrese numero de filas de la matriz 1\n");
        	scanf("%d",&f1);
        	printf("Ingrese numero de columnas de la matriz 1\n");
        	scanf("%d",&c1);
        	printf("Ingrese numero de filas de la matriz 2\n");
        	scanf("%d",&f2);
        	printf("Ingrese numero de columnas de la matriz 2\n");
        	scanf("%d",&c2);
        	if (f1==c2){
            	printf ("matriz 1\n");
            	datoa(arre,f1,c1);
            	printf("matriz 2\n");
            	datob(arra,f2,c2);
            	printf("El resultado de la multiplicacion es \n");
            	m(arrb,f1,c1);
            	printf("\n");
        	}else{
            	printf("Los datos son incorrectos\n");
        	}
        	break;
    }

    return 0;
}
int datosarreglos (int*arreglo,int t){
    for(j=1;j<=t;j++){
        printf("numero [%d] ",j);
        scanf("%d",&arreglo[j]);
    }
    printf("\n");
}
int datosimpresion (int*arreglo,int t){
    for(j=1;j<=t;j++){
        printf("posicion [%d] %d\n",j,arreglo [j]);
	}
}
int datosaleatorio(int *arreglo, int t){
    int j;
    for(j=1; j<=t; j++){
        arreglo[j]=1+rand()%100;
    }
}
int impresionale(int *arreglo, int t){
    int j;
    for(j=1; j<=t; j++){
        datosaleatorio(arreglo,t);
        printf("posicion [%d]: %d\n",j,arreglo[j]);
    }
}
int sumarreglos (int*arreglo,int t){
    for(j=1; j<=t; j++){
        arreglo[j]=arreglo1[j]+arreglo2[j];
        printf("La suma es [%d]: %d\n",j,arreglo[j]);
    }
}
int suma_unarreglo(int*arreglo,int t){
    for(i=1; i<=t ;i++){
        suma=suma+arreglo1[i];
    }
    printf("%d",suma);
}
int datosmatriz(int arre[][100], int f, int c){
    for (i=1; i<=f; i++)
    for (j=1; j<=c; j++){
        printf("orden [%d][%d] => ",i,j);
        scanf("%d",&arre[i][j]);
    }
}
int matriz(int arre[][100],int f, int c){
    for (i=1; i<=f; i++){
        printf("\n");
        for (j=1; j<=c; j++)
        printf(" %d",arre[i][j]);
        printf("\n");
    }
}
int Lmatriz(int arre[][100], int f, int c){
    for (i=1; i<=f; i++){
        printf("\n");
        for(j=1; j<=c; j++){
            arre[i][j]=1+rand()%100;
            printf(" %d",arre[i][j]);
        }
    }
}
int datoa(int arre[][100], int f1, int c1){
	for (i=1; i<=f1; i++)
		for(j=1; j<=c1; j++){
    		printf("orden [%d][%d] => ",i,j);
    		scanf("%d",&arre[i][j]);
		}
}
int datob(int arre[][100], int f2, int c2){
	for (i=1; i<=f2; i++)
		for(j=1; j<=c2; j++){
    		printf("orden [%d][%d] => ",i,j);
    		scanf("%d",&arra[i][j]);
		}
}
int sumadosmatrices(int arrb[][100], int f1, int c1){
    for (i=1; i<=f1; i++)
    	for (j=1; j<=c1; j++)
    		arrb[i][j]=arre[i][j]+arrb[i][j];
    for(i=1; i<=f1; i++){
        printf("\n");
        for(j=1; j<=c2; j++)
        	printf(" %d", arrb[i][j]);
        printf("\n");
    }
}
int m(int arrb[][100], int f1, int c1){
    int i,j, acumulador,contador;
    for(i=1; i<=f1; i++)
    	for(j=1; j<=c1; j++){
        	for(acumulador=0, contador=0; contador<=c1; contador++)
        		acumulador=acumulador+arre[i][contador]*arra[contador][j];
        		arrb[i][j]=acumulador;
    }
    for(i=1; i<=f1; i++){
        printf("\n");
        for(j=1; j<=f2; j++)
        	printf(" %d",arrb[i][j]);
    }
}

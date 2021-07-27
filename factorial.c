/**
 Author: Genaro Hernández Valdez
 fecha: 26-Julio-2021
**/
#include <stdio.h>
#include <math.h>

int main(){
    int x, f=1;
    printf("Este programa obtiene el factorial de un número entre 0 y 100\n");
    printf("Escribe un número entero entre 0 y 100:\n");
    scanf("%d", &x);
    if(x==0 || x==1) printf("El factorial de %d es %d\n", x, f);
    else if (x>=2 && x<=100) {
            for (int i=2;i<=x;i++) f=f*j;
            printf("El factorial de %d es %d\n", x, f);
          }
          else printf("El número %d está fuera del intervalo requerido\n");
    system("pause");
    return 0;
}

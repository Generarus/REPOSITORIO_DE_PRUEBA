/**
 Author: Genaro Hernández Valdez
 fecha: 26-Julio-2021
 
 Este programa calcula la probabilidad de bloqueo de un
 sistema BCC con s servidores y trafico ofrecido a Erlangs
**/
#include <stdio.h>
#include <math.h>


int main (int s,double a){//s: servidores, a: tráfico ofrecido
    double a, B=0.0,IB=1.0;
    int s;
    printf("Este programa obtiene la probabilidad de bloqueo de un sistema BCC\n");
    printf("Escribe el número de servidores (por ejemplo 10):\n");
    scanf("%d", &s); 
    printf("Escribe el tráfico ofrecido (por ejemplo 5):\n");
    scanf("%f", &x);
    if (a<=0.0 || s<0) printf("Valores no válidos\n");    
    else for (int i=1;i<=s;i++) IB=1.0+i*IB/a;
    B=1.0/IB;
    printf("El bloqueo de un sistema BCC con %d servidores y tráfico ofrecido %f Erlangs es %f %\n", s, a, B);
    system("pause");
    return 0;
}

#include <stdio.h>

int suma(int a,int b);
int resta(int a, int b);
int division(int a,int b);
int multiplicacion(int a, int b);

int main(){

    int x;
    int y;
    char o;

    printf("---------Calculadora sencilla----------------\n");

    printf("Escribe un numero: ");
    scanf("%d", &x);

    printf("Escribe otro numero: ");
    scanf("%d", &y);

    printf("Escoge que operacion quieres que se realice: ");
    scanf(" %c", &o);

    switch(o){
        case 's':
            int resultado_s = suma(x,y);
            printf("El resultado es: %d", resultado_s);
            break;

        case 'r':
            int resultado_r = resta(x,y);
            printf("El resultado es: %d", resultado_r);
            break;

        case 'd':
            int resultado_d = division(x,y);
            printf("El resultado es: %d", resultado_d);
            break;

        case 'm':
            int resultado_m = multiplicacion(x,y);
            printf("El resultado es: %d", resultado_m);
            break;
    }

    return 0;
}

int suma(int a, int b){
    int r = a+b;
    return r;
}

int resta(int a, int b){
    int r = a+b;
    return r;
}

int division(int a, int b){
    int r = a+b;
    return r;
}

int multiplicacion(int a, int b){
    int r = a*b;
    return r;
}
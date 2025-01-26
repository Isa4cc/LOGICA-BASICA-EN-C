/*Iniciamos incluyendo la librería stdio.h*/
#include <stdio.h>

/*Declaramos la función principal*/ 
int main(){
    //Declaramos la variable entera para la sentencia según el caso
    int opcion;
    //Declaramos la variable numero 1 y 2 para los casos.
    int numero;
    //PD: también podemos declarar la variable en la misma línea de la sentencia.
    //int numero, opcion; se vería así y no habría problema

    //Imprimimos un mensaje en pantalla
    printf("Menú de opciones\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    scanf("%d", &opcion);
    //Una vez leído el valor de la opción, procedemos a evaluarla
    switch(opcion){
        //Caso 1
        case 1:
            printf("Ingrese el primer número: ");
            scanf("%d", &numero);
            printf("Ingrese el segundo número: ");
            scanf("%d", &opcion);
            printf("La suma es: %d\n", numero + opcion);
            break;
        //Caso 2
        case 2:
            printf("Ingrese el primer número: ");
            scanf("%d", &numero);
            printf("Ingrese el segundo número: ");
            scanf("%d", &opcion);
            printf("La resta es: %d\n", numero - opcion);
            break;
        //Caso 3
        case 3:
            printf("Ingrese el primer número: ");
            scanf("%d", &numero);
            printf("Ingrese el segundo número: ");
            scanf("%d", &opcion);
            printf("La multiplicación es: %d\n", numero * opcion);
            break;
        //Caso por defecto
        default:
            printf("Opción no válida\n");
            break;
    }


    return 0;
}
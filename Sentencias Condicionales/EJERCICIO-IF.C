//Recurda incluir la libreria stdio.h para poder utilizar la funcion printf y scanf!

/*Para incluir cualquier librería estándar, se usa la
siguiente notación: #include <nombre de la librería.h>
los <> SÍ van en la sintaxis*/
//También recuerda que en C la sintaxis es estricta con respecto al uso de ; y {}

#include <stdio.h>

int main(){
    //Declaramos una variable de tipo entero numero.
    int numero;
    //Imprimimos un mensaje en pantalla para que el usuario sepa que debe introducir un número.
    printf("Por favor introduce un numero: ");
    //Leemos el número que el usuario introdujo y lo guardamos en la variable numero.
    scanf("%d", &numero);
    //Comparamos si el número introducido por el usuario es mayor a 0.
    if (numero > 0){
        //Si el número es mayor a 0, imprimimos un mensaje en pantalla que diga que el número es positivo.
        printf("\nEl numero es positivo\n");
    // Ahora si no es positivo el número
    }else{
        //Si el número no es mayor a 0, imprimimos un mensaje en pantalla que diga que el número es negativo.
        printf("\nEl numero es negativo\n");
    }

/*Y para un if anidado, podría ser así:*/
    //Imprimimos el mensaje para que el usuario sepa que debe de ingresar un número.
    printf("\nPor favor introduce un numero entre 1 y 3, solo enteros: ");
    //Leemos el número que el usuario introdujo y lo guardamos en la variable numero.
    scanf("%d", &numero);
    //Comparamos si el número introducido por el usuario es igual a 1.
    if (numero == 1){
        //Si el número es igual a 1, imprimimos un mensaje en pantalla que diga que el número es 1.
        printf("\nEl numero es 1\n");
    //Si el número no es igual a 1, comparamos si el número es igual a 2.  
    }else if(numero == 2){
        //Si el número es igual a 2, imprimimos un mensaje en pantalla que diga que el número es 2.
        printf("\nEl numero es 2\n");
    //Si el número no es igual a 1 ni a 2, comparamos si el número es igual a 3.
    }else if(numero == 3){
        //Si el número es igual a 3, imprimimos un mensaje en pantalla que diga que el número es 3.
        printf("\nEl numero es 3\n");
    //Si el número no es igual a 1, 2 ni 3, imprimimos un mensaje en pantalla que diga que el número no está en el rango de 1 a 3.
    }else{
        printf("\nEl numero no esta en el rango de 1 a 3\n");
    }
    
    //Retornamos 0 para indicar que el programa se ejecutó correctamente.
    return 0;
}
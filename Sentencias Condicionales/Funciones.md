# FUNCIONES

Las funciones son estructuras que nos permiten ejecutar distintos formatos de código, generalmente piden un valor de retorno, a excepción de las funciones *void*.

A continuación, los tipos de funciones:

## Función main

Esta es la función principal del código, y **No se puede duplicar o existir otra función main**, se caracteriza por su funcionamiento principal dentro del código y su sintaxis es la siguiente:

```C
int main(){

    //Aquí va todo el código que se desee ingresar

    return 0;
}
```
Como se puede observar, existen 3 particularidades en esta función, los paréntesis, que deben de ir en vacío, tal cual está,
las llaves que indican **dónde inicia el código y dónde termina**, y la línea *return 0;* que es el valor obligatorio que necesita la
función de regreso, no es necesario que sea cero.

## Funciones secundarias

Estas funciones secundarias, van fuera de la main, ya sea al inicio o al final, y son llamadas a la función main, y pueden ser así:

```C
float nombre de la función()
void nombre de la función()
int nombre de la función()
char nombre de la función()
```

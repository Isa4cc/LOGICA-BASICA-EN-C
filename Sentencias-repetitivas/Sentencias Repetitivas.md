# Sentencias Repetitivas
este tipo de sentencias permite mantener en un bucle o **ciclo** determinado por una variable o valor
Se realiza un número finito de veces, además de existir una condición de *inicio* y de *fin*, a parte de que de en cada ciclo o *iteración* debe evaluarse si se mantiene en el ciclo o no.

Existen 3 tipos de sentencias repetitivas. *While-Do while-For*

## While
La estructura while permite mantener un bucle si se cumple la condición. Su estructura es la siguiente:
```C
while(condición){
    //Acción a hacer en bucle únicamente si condición=Verdad
}
```
## Do-While
Esta sentencia es similar a la anterior, con la peculiaridad de que al menos una vez se ejecuta el código dentro del bucle, puesto que la condición a evaluar en cada iteración está ubicada al final del bucle, lo que la hace una excelentísima opción para validar datos. Su sintaxis es esta:
```C
do{
    /*Acción en el bucle*/
}while(condición);
```
## For
La sentencia For es una estructura peculiar puesto que permite mantener un bucle inicializando el valor inicial y final de una variable, junto al contador en crecimiento o decrecimiento de esta, **dentro** del mismo for, su sintaxis es la siguiente:
```C
for(int variable=0; variable<numero; variable++){
    //Acciones dentro del bucle
}

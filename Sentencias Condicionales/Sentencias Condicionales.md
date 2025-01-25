# Sentencias

En programación, una sentencia es una orden que, mediante bloques de código
se le "ordena" al ordenador a ejecutar, de ahí su nombre.

Existen 2 tipos de sentencias, las *condicionales* y las *repetitivas*. A continuación las sentencias **Condicionales**

# Sentencias Condicionales

Una sentencia condicional es un bloque de código que le indica a la computadora *cómo ejecutar* el código en orden **lineal**, es decir, línea por línea, con la peculiaridad de que, existe una **condición** que indica qué camino tomar, como un *árbol de decisiones*.

## Sentencia *If-else/Si-entonces*

Generalmente se representa como ***if-else***, se basa principalmente en la condición a cumplir, y si se cumple
se ejecuta una orden y se desecha otra.

### Ejemplo en C:

```C
if(condición){
    /*Orden a ejecutar si se
    cumple la condición*/
}
```

Además, existen las *decisiones* en el if-else:
1. Decisiones simples
- Como la del ejemplo anterior, es la más básica que existe, solo consta de un único bloque de código a ejecutar si se cumple la condición.
2. Decisiones dobles
- Sucede cuando se tiene dos bloques de código a ejecutar, uno se ejecutará si la condición se cumple y el otro no lo hará, y viceversa, como ejemplo:
```C
if(condición){
    /*Código si condición=Verdad*/
}else{
    /*Código si condición=Falso*/
}
```
3. Decisiones anidadas
- Esta decisión en particular sucede cuando existe una decisión, ya sea doble o simple *dentro* de otra decisión. A continuación un ejemplo en **C** de su sintaxis:
```C
if(condición 1){
    /*Acción 1*/
}else if(condición 2){
    /*Acción 2*/
}
```

Cabe aclarar que sí es posible seguir iterando más condiciones si es así necesitado, solo no te olvides de ordenar el código bien, osea **Identando las líneas de código acorde a la decisión**.

> No te preocupes si no te queda claro cómo funciona, ter dejo unos ejemplos de cómo funciona el if-else :D
> Se ubican en esta misma carpeta los ejercicios!!

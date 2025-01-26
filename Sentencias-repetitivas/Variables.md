### Variables y Constantes
Una variable es unt tipo de dato (numérico o alfabético) que se almacena en un espacio designado en la memoria del sistema
por la ejecución de un programa. Existen 5 tipos de datos:
1. Numéricos: 
Dentro de este tipo de datos, están los números enteros o decimales que son **designados por el usuario en función de lo que el programa requiera**, es decir, los números ingresados en el programa por parte del usuario.
2. Caracter:
Son todos los datos posibles que puede almacenar el ordenador, como las letras, números o incluso símbolos especiales como @, $,*.
3. Cadena:
Una cadena es un **conjunto** de caracteres, como las palabras *Hola* o incluso frases como *La independencia del ecuador fue en 1822*.
4. Booleanos:
Los tipos de datos booleanos son aquellos valores *binarios* que puede tomar una variable dentro del mundo de la lógica computacional. sus valores son el 0 o el 1, o incluso True/False.
5. Constantes:
Las constantes son valores específicos que no cambian durante la compilación del programa, como los números *Pi* o *e*, e incluso valores ingresados por el usuario que sean necesarios convertirse en constante.

Ahora, existen dentro de las **variables**, existen los *aumentadores* y *contadores*.
Los contadores son variables que, como su nombre lo dice, *cuentan* procesos internos dentro del programa, como cúantas veces se le indicó al programa hacer algo. Su sintaxis es la siguiente, siguiendo con los pasos para declarar variables:
```C
//Declaramos la variable
int variable;
//Inicializamos esta variable en cero
variable=0;
//Indicamos la fórmula de los contadores
variable=variable+1;//Puede ser 1,2 o -90, lo importante es que la fórmula es contador=contador+constante
//Podemos hacerlo de otra forma?
variable++1;
```
En cambio, los aumentadores son variables que aumentan su valor, almacenando en su **espacio de memoria** la sumatoria de su valor inicial con el de una variable cualquiera. Su fórmula es así *aumentador=aumentador+variable*, y en C se ve así:
```C
//Declaramos las variables
int aumentador, variableX;
//Indicamos la fórmula de aumentadores
aumentador=amuentador+variableX;
//O de otra forma
aumentador+=variableX;
```

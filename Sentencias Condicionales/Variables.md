# TIPOS DE VARIABLES

No solo en C existen éstas variables, también están presentes en otros lenguajes, conocerlas nos ayuda a
mejorar nuestro conocimiento en esta área.

1. Variable *int*
- Esta variable nos permite almacenar valores únicamente numéricos, para su posterior uso dentro del código, su declaración es:
```C
int variable;
// O si se desea inicializarla con un valor:
int variable=1;
// Poniendo como ejemplo una inizialición en 1.
```
2. Variable *float*
-  Esta variable, almacena igualmente valores numéricos, con la diferencia de que no sólo son enteros, sino valores decimales como el 0.1 o los primeros 5 dígitos de PI. Su declaración es la siguiente:
```C
float variable;
// O si se desea inicializarla con un valor:
float variable=3.14;
// Iniciando en un valor n
```
3. Variable *char*
- Esta variable es peculiar, puesto que puede tomar valores **alfanuméricos** como *Hola123* o *98OPLk!*, como se puede ver, su uso puede ser multifacético y útil en nuestro código.
```C
char variable;
// O si se desea inicializarla con un valor:
char variable = 'holamun';
// Iniciando en un caracter o caracteres.
```

Además, existen palabras que son *reservadas* dentro de los lenguajes para indicar una ampliación del alacance de estas variables, como las palabras *long o double*, y el caso especial de *void*, del cual hablaremos más adelante. 

## MÁSCARAS DE VARIABLES

En C, es necesario que al momento de pedir un valor para luego almacenarlo en una variable, se necesite de una *máscara* que no es mas que una notación que el lenguaje necesita para entender lo que pides:
```C
int numero;
printf("Ingresa un número");
scanf("%d", &numero);
```
Como se puede ver, se pide dentro de las comillas la máscara, para los int es %d, para char es %c y para float %f.
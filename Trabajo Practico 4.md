#**Trabajo Practico Numero 4**


1. Lo que realiza la primer expresion de a sentencia for en el main es comparar si la variable c es igual a caracter de control ‘\n‘. Si esto es cierto, se incrementara en uno la variable nl.
La coma es un operador binario y a diferencia de la mayoria de los operadores en C, este posee orden de evaluacion. Por lo tanto, el operador coma (,) establece que se evalue en primera instancia el elemento ubicado a la izquierda y luego el de la derecha.
El resultado de este operador va a ser el valor del elemento que se encuentra ubicado a la derecha.


2. Los parentesis en la expresion c=getchar() son necesarios, ya que la precedencia del operador de comparacion "distinto de" (!=) es mas alta que la del operador de asginacion (=). Por lo tanto, en caso de que no existan los parentesis, la prueba de relacion, distinto de, se realizaria antes de la asignacion. En lo que la variable c, tomaria un valor entre 0 y 1.

3. El if, a nivel pragmatico, lo que realiza es verificar si el for termino con error. En caso de ser asi, imprimira por pantalla un aviso de lo sucedido.

A nivel semantico, se evalua si se cumple la expresion del if, que llama a feof, pasandole como argumento stdn y niega todo con el operador !. Si la condicion del if se cumple, se lleva a cabo la sentencia perror, que imprime un mensaje con lo siguiente, "No se pudo seguir leyendo de la entrada debido a un error".
En caso de que la condicion, no se cumpla, el programa pasara a la siguiente sentencia, la cual se encuentra fuera del if antes analizado.


4. El prototipo de la funcion perror es : void perror(const char *s);
Esta funcion produce un mensaje que va a la salida estandard de errores, describiendo el ultimo error encontrado durante alguna llamado del sistemas o a ciertas  funciones de la biblioteca. La cadena de caracteres s que pasa como argumento, se muestra primero, seguida por un signo de dos puntos,un espacio en blanco, seguido por un mensaje y posteriormente un salto de linea. El codigo de error se toma de la variable externa errno, que toma un valor cuando ocurre un error, y no se pone en 0 en una llamada no erronea.
fprint(stderr, "%s: %s\n", s,"Mensaje de error")

A la variable especial del sistema errno algunas llamadas al sistema (y algunas funciones de biblioteca) le dan un valor entero, para indicar que ha habido un error. Esta variable esta definida en la cabecera #include <errno.h> y para ser usada dentro de un programa debe ser declarada de la siguiente forma:

extern int errno;


5. Remplazo la expresion !feof(stdin) por la expresion perror(stdin).

 La semantica de la funcion feof es la siguiente, recibe como parametro el argumento std y devuelvo un valor diferente de 0 si esta encendido el indicador de fin de archivo para stdin.

La semantica de la funcion ferror recibe como parametro stdin y devuelve un valor diferente de 0 si esta encendido el indicador de error de stdin.

No son mutuamente excluyentes, porque una funcion me indica si se llego al fin del archivo y la otra me va a indicar si ocurrio algun error. Por lo tanto se puede haber llegado al fin de archivo y puede haber existido un error.

La pragmatica de feof en este programa es avisar si el flujo de datos no llego a su fin.

6. La expresion %.1f escribe como punto flotante, con un caracter despues del punto decimal.


7. Se aplica el casteo para cambiar el tipo de dato de esa expresion solamente y de esta manera obtener un resultado con mayor precision en la division.



10. El programa no funciona para el ingreso de cadenas vacias.


11. El programa no es preciso, ya q cuenta los saltos de linea ademas de los caracteres.

12. Los cambios a realizar estarian basados, en alguna manera, descontarle a la variable nc, que hace referencia a los caracteres ingresados, la cantidad de saltos de linea, que se guardan en la variable nl.
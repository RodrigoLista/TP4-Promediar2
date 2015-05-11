
/* Lista Rodrigo
10/05/15
Este programa cuenta los caracteres ingresados y la cantidad de saltos de linea, luego muestra un promedio de la cantidad de caracteres en cada linea*/



#include <stdio.h>
#include <stdlib.h>

int main(void) {
   int nl=0; /* la cantidad de lineas */
   int nc=0; /* la cantidad de caracteres */
   int c; /* el caracter leido */

   printf("ingrese el texto");

   for( ;(c = getchar()) != EOF; )
      { if(c == '\n')
           ++nl;
       else
           ++nc;
      }
   if( !feof(stdin) )
       perror("No se pudo seguir leyendo de la entrada debido a un error");

   printf("\nLongitud promedio: %.1f\n", nc / (float)nl );

   return EXIT_SUCCESS;
}

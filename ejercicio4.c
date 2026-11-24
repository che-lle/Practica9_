1   /*Yañez Perez Michelle
2   Ejercicio 4
3   A continuación, se muestra un programa que genera un arreglo unidimensional de
4   máximo 10 elementos. Para poder leer y almacenar datos en cada elemento y
5   posteriormente mostrar el contenido de estos elementos se hace uso de un ciclo for
6   respectivamente.*/
7
8   #include <stdio.h>
9   int main ()
10  {
11      int lista[10]; // Se declara el arreglo unidimensional
12      int indice=0;
13      int numeroElementos=0;
14      printf("\nDa un número entre 1 y 10 para indicar la cantidad de elementos que tiene el arreglo\n");
15      scanf("%d",&numeroElementos);
16      if((numeroElementos>=1) && (numeroElementos<=10))
17      {
18          // Se almacena un número en cada elemento del arreglo unidimensional usando for
19          for (indice = 0 ; indice <= numeroElementos-1 ; indice++)
20          {
21              printf("\nDar un número entero para el elemento %d del arreglo", indice );
22              scanf("%d",&lista[indice]);
23          }
24
25          printf("\nLos valores dados son: \n");
26          // Se muestra el número almacenado en cada elemento del arreglo unidimensional usando for
27          for (indice = 0 ; indice <= numeroElementos-1 ; indice++)
28          {
29              printf("%d ", lista[indice] );
30          }
31      }
32      else printf("el valor dado no es válido");
33      printf("\n");
34      return 0;
35  }

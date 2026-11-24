1   /*Yañez Perez Michelle
2   ejercicio 2
3   En el siguiente código se genera un arreglo unidimensional de 5 elementos y que para
4   poder acceder, recorrer y mostrar cada elemento del arreglo se usa la variable indice
5   desde 0 hasta 4 haciendo uso de un ciclo do-while*/
6
7   #include <stdio.h>
8   int main ()
9   {
10      int lista[5] = {10, 8, 5, 8, 7}; // Se declara e inicializa el arreglo unidimensional
11      int indice = 0;
12      printf("\tLista\n");
13      do // Acceso a cada elemento del arreglo unidimensional usando do-while
14      {
15          printf("\nCalificación del alumno %d es %d", indice+1, lista[indice]);
16          indice += 1; // Sentencia análoga a indice = indice + 1;
17      }
18      while (indice < 5 );
19      printf("\n");
20      return 0;
21  }

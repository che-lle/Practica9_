1   /*Yañez Perez Michelle
2   A continuación, se muestra el código de un programa que genera un arreglo
3   unidimensional de 5 elementos y que para poder acceder, recorrer y mostrar cada
4   elemento del arreglo se usa la variable indice desde 0 hasta 4 haciendo uso de un ciclo
5   while. */
6
7   #include <stdio.h>
8   int main ()
9   {
10      int lista[5] = {10, 8, 5, 8, 7}; // Se declara e inicializa el arreglo unidimensional
11      int indice = 0;
12      printf("\tLista\n");
13      while (indice < 5 ) // Acceso a cada elemento del arreglo unidimensional usando while
14      {
15          printf("\nCalificación del alumno %d es %d", indice+1, lista[indice]);
16          indice += 1; // Sentencia análoga a indice = indice + 1;
17      }
18      printf("\n");
19      return 0;
20  }

1   /*Yañez Perez Michelle
2   Ejercicio 3
3   A continuación, se muestra el código que genera un arreglo unidimensional de 5
4   elementos y que para poder acceder, recorrer y mostrar cada elemento del arreglo se usa
5   la variable indice desde 0 hasta 4 haciendo uso de un ciclo for.*/
6
7   #include <stdio.h>
8   int main ()
9   {
10      int lista[5] = {10, 8, 5, 8, 7}; // Se declara e inicializa el arreglo unidimensional
11      int indice=0;
12      printf("\tLista\n");
13
14      // Acceso a cada elemento del arreglo unidimensional usando for
15      for (indice = 0 ; indice < 5 ; indice++)
16      {
17          printf("\nCalificación del alumno %d es %d", indice+1, lista[indice]);
18      }
19      printf("\n");
20      return 0;
21  }

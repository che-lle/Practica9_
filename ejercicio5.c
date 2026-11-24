1   /*Yañez Perez Michelle
2   Ejercicio 4
3   Corrección del ejercicio 4*/
4
5   #include <stdio.h>
6   int main ()
7   {
8       int lista[10];
9       int elemen = 0;
10
11      do
12      {
13          printf("\nDa un número entre 1 y 10 para indicar la cantidad de elementos que tiene el arreglo\n");
14          scanf("%i", &elemen);
15      }
16      while (elemen < 1 || elemen > 10);
17
18      for (int i= 0 ; i < elemen; i++)
19      {
20          {
21
22              printf("Dar un número entero para el elemento %i del arreglo ", i +1);
23              scanf("%i",&lista[i]);
24          }
25
26      printf("Los valores de la lista son: ");
27
28      for (int j = 0 ; j < elemen; j++)
29      {
30          {
31              printf("%i ", lista[j]);
32          }
33      }
34          printf("\n\n");
35          return 0;
36      }

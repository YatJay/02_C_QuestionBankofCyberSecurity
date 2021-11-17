#include <stdio.h>

 

int main(void)

{

       int i, j, n, sum1 = 0, sum2 = 0;

       int array[15][15];

 

       printf("Input:\nPlease Enter n:\n");

       scanf("%d", &n);

       for (i = 0; i < n; i++)

       {

              for (j = 0; j < n; j++)

              {

                     array[i][j] = (i + j) * n;

              }

       }

 

       for (i = 1; i < n - 1; i++)

       {

              for (j = 1; j < n - 1; j++)

              {

                     sum1 += array[i][j];

              }

       }

       for (i = 0; i < n; i++)

       {

              sum2 += array[i][i];

       }

       printf("Output:\n");

       for (i = 0; i < n; i++)

       {

              for (j = 0; j < n; j++)

              {

                     printf("%4d", array[i][j]);

              }

              printf("\n");

       }

       printf("sum1=%d\nsum2=%d\n", sum1, sum2);

       return 0;

}


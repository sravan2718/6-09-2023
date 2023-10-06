/*
*
* *
* * *
* * * *
* * * * *
*/
#include<stdio.h>
int main()
{
    int rows = 5;
    for(int i = 0; i < rows; i++){
        //next go to for loop//
    for(int j = 0; j <= i; j++){
        printf("* ");
    }
        printf("\n");
    }
    return 0;
}   
        
//half pyramid of numbers//

#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
}

/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, k, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        k = i;

        // print numbers
        for(j=1; j<=i; j++, k++)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}


/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=N; i>=1; i--)
    {
        // Logic to print numbers
        for(j=N; j>=i; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

//half pyramid of alphabets//

#include <stdio.h>
int main() {
   int i, j;
   char input, alphabet = 'A';
   printf("Enter an uppercase character you want to print in the last row: ");
   scanf("%c", &input);
   for (i = 1; i <= (input - 'A' + 1); ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%c ", alphabet);
      }
      ++alphabet;
      printf("\n");
   }
   return 0;
}

// inverted half pyramid of*//

#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = rows; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}    
    
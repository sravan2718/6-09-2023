// nested do while loop;

#  include <stdio.h>
int main()
{
    int i,j;
    i = 1;
    do
    {
        j = i;
        do
        {
            printf("*");
            j++;
        }
        while (j<=5);
        i++;
        printf("/n");
    }
    while (i<=5);
    return 0;
}

//example;

#include <stdlib.h>
int main()
{
    int i,j;
    i=1;
    printf("Square number pattern\n\n");
    printf("Here your pattern\n\n");
 do{
    j=1;
 do{
    printf("%d",j);
    j++;
 }while(j<=10);
    printf("\n");
    i++;
    }while(i<=10);
    getch();
    return 0;
    }
	
example;

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j;
    i=1;
    printf("Asterisk number pattern\n\n");
    printf("Here your pattern\n\n");
 do{
    j=1;
 do{
    printf("*");
    j++;
 }while(j<=9);
    printf("\n");
    i++;
    }while(i<=9);
    getch();
    return 0;
    }
	
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j;
    i=1;
    printf("Triangle number pattern\n\n");
    printf("Here your pattern\n\n");
 do{
    j=1;
 do{
    printf("%d",j);
    j++;
 }while(j<=i);
    printf("\n");
    i++;
    }while(i<=9);
    getch();
    return 0;
    }
	
# example;

//nested do-while loop in C

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j;
    i=1;
    printf("Multiplication table\n\n");
    printf("Here multiplication table\n\n");
 do{
    j=1;
 do{
    printf("%d\t",i*j);
    j++;
 }while(j<=10);
    printf("\n");
    i++;
    }while(i<=10);
    getch();
    return 0;
    }
	
	
 


//nested for loop ;

# include <stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=5; i++,printf("\n"))
    {
        for(j=1; j<=i; j++)
        {
            printf("%d  ", j);
        }
        //printf("\n");
    }
}

//example;

#include <stdio.h>  
int main()  
{  
   int n;// variable declaration  
   printf("Enter the value of n :");  
   // Displaying the n tables.  
   for(int i=1;i<=n;i++)  // outer loop  
   {  
       for(int j=1;j<=10;j++)  // inner loop  
       {  
           printf("%d\t",(i*j)); // printing the value.  
       }  
       printf("\n");  
   } 

//example;

 #include <stdio.h>  
int main()  
{  
   int rows;  // variable declaration  
   int columns; // variable declaration  
   int k=1; // variable initialization  
   printf("Enter the number of rows :");  // input the number of rows.  
   scanf("%d",&rows);  
   printf("\nEnter the number of columns :"); // input the number of columns.  
   scanf("%d",&columns);  
      int a[rows][columns]; //2d array declaration  
      int i=1;  
   while(i<=rows) // outer loop  
   {  
       int j=1;  
      while(j<=columns)  // inner loop  
       {  
           printf("%d\t",k);  // printing the value of k.  
           k++;   // increment counter  
           j++;  
       }  
       i++;  
       printf("\n");  
   }  
}  


 #include <stdio.h>
 
int main () {

   /* local variable definition */
   int i, j;
   
   for(i = 2; i<100; i++) {

      for(j = 2; j <= (i/j); j++) 
      if(!(i%j)) break; // if factor found, not prime
      if(j > (i/j)) printf("%d is prime\n", i);
   }
 
   return 0;
} 

// C program to display 7 days a weeks
      
#include <stdio.h>
int main() {
    int weeks = 1, days_in_week = 7;
    for (int i = 1; i <= weeks; ++i) {
        printf("Week: %d\n", i);

        for (int j = 1; j <= days_in_week; ++j) {
            printf("    Day: %d\n", j);
        }
    }
    return 0;
}

// C program to display a triangular pattern 
// Number is entered by the user

#include <stdio.h>
int main() {

   int i, j, n;
   printf("Enter Number :  ");
   scanf ("%d", &n);

   for (i = 1; i <= n; i++) {
      for (j = 1; j <= i; j++) {
         printf("*  ");
      }
      printf("\n");
   }

    return 0;
}